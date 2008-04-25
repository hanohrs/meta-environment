package toolbus;

import java.io.IOException;
import java.lang.management.ManagementFactory;
import java.lang.management.MemoryMXBean;
import java.lang.management.ThreadInfo;
import java.lang.management.ThreadMXBean;
import java.net.ConnectException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.UnknownHostException;
import java.nio.ByteBuffer;
import java.nio.channels.SocketChannel;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Set;
import jjtraveler.VisitFailure;
import aterm.AFun;
import aterm.ATerm;
import aterm.ATermAppl;
import aterm.ATermFactory;
import aterm.ATermInt;
import aterm.ATermList;
import aterm.pure.PureFactory;
import aterm.pure.binary.BinaryReader;
import aterm.pure.binary.BinaryWriter;

abstract public class AbstractTool implements Tool, Runnable, IOperations{
	private final static int HANDSHAKEBUFFERSIZE = 4096;
	
	private final ByteBuffer writeBuffer;
	private final ByteBuffer readBuffer;
	private SocketChannel socketChannel = null;
	
	protected final ATermFactory factory;
	
	private String toolname;
	private int toolid = -1;
	
	private String host;
	private int port = -1;
	
	private final Map<Long, ThreadLocalJobQueue> threadLocalQueues;
	private final Map<AFun, JobQueue> queues;
	
	private ATerm empty;
	
	private Object lockObject;
	
	private volatile boolean running;
	
	private boolean connected;
	
	private boolean expectingDisconnect = false;
	
	public AbstractTool(ATermFactory factory){
		this.factory = factory;
		
		empty = factory.makeList();
		threadLocalQueues = new HashMap<Long, ThreadLocalJobQueue>();
		queues = new HashMap<AFun, JobQueue>();
		lockObject = this;
		
		writeBuffer = ByteBuffer.allocateDirect(32768);
		readBuffer = ByteBuffer.allocateDirect(32768);
	}
	
	public void init(String[] args) throws UnknownHostException{
		for(int i = 0; i < args.length; i++){
			if(args[i].equals("-TB_PORT")){
				port = Integer.parseInt(args[++i]);
			}
			if(args[i].equals("-TB_HOST")){
				host = args[++i];
			}
			if(args[i].equals("-TB_TOOL_NAME")){
				toolname = args[++i];
			}
			if(args[i].equals("-TB_TOOL_ID")){
				toolid = Integer.parseInt(args[++i]);
			}
		}
		
		if(host == null || port == -1){
			throw new RuntimeException("Dunno where the ToolBus is running, so can't connect.");
		}
	}
	
	public void setLockObject(Object lockObject){
		this.lockObject = lockObject;
	}
	
	public Object getLockObject(){
		return lockObject;
	}
	
	public void connect() throws IOException{
		if(connected) throw new IOException("already connected to ToolBus");
		
		try{
			socketChannel = SocketChannel.open();
			Socket socket = socketChannel.socket();
			// Disable Nagle's algorithm, we don't want the random 500ms delays.
			socket.setTcpNoDelay(true);
			// Set the traffic class to high throughput and low delay.
			socket.setTrafficClass(0x18);

			socketChannel.connect(new InetSocketAddress(host, port));
			socketChannel.configureBlocking(true);

			shakeHands();
		}catch(ConnectException cex){
			throw new RuntimeException(cex);
		}catch(IOException ioex){
			closeConnection();
			throw new RuntimeException(ioex);
		}catch(RuntimeException rex){
			closeConnection();
			throw new RuntimeException(rex);
		}
		
		connected = true;
	}
	
	public void connect(String tool_name, InetAddress address, int p) throws IOException{
		if(connected) throw new IOException("already connected to ToolBus");
		
		this.toolname = tool_name;
		this.host = address.getHostAddress();
		this.port = p;
		
		try{
			socketChannel = SocketChannel.open();
			Socket socket = socketChannel.socket();
			// Disable Nagle's algorithm, we don't want the random 500ms delays.
			socket.setTcpNoDelay(true);
			// Set the traffic class to high throughput and low delay.
			socket.setTrafficClass(0x18);

			socketChannel.connect(new InetSocketAddress(host, port));
			socketChannel.configureBlocking(true);

			shakeHands();
		}catch(ConnectException cex){
			throw new RuntimeException(cex);
		}catch(IOException ioex){
			closeConnection();
			throw new RuntimeException(ioex);
		}catch(RuntimeException rex){
			closeConnection();
			throw new RuntimeException(rex);
		}
		
		connected = true;
	}
	
	public void disconnect(){
		connected = false;
		sendTerm(DISCONNECT, empty);
		
		expectingDisconnect = true;
	}
	
	public boolean isConnected(){
		return connected;
	}
	
	public int getPort(){
		return port;
	}
	
	public InetAddress getAddress(){
		InetAddress adress;
		try{
			adress = InetAddress.getByName(host);
		}catch(UnknownHostException uhex){
			throw new RuntimeException("Unable to resolve ToolBus host adress.");
		}
		return adress;
	}
	
	private void writeTermToChannel(ATerm aTerm, ByteBuffer byteBuffer) throws IOException{
		BinaryWriter binaryWriter = new BinaryWriter(aTerm);
		while(!binaryWriter.isFinished()){
			byteBuffer.clear();
			byteBuffer.position(2);
			try{
				binaryWriter.serialize(byteBuffer);
			}catch(VisitFailure vf){
				// Bogus catch block, this can't happen.
			}
			// Insert chunk size data.
			int chunkSize = byteBuffer.limit() - 2;
			byteBuffer.put(0, (byte) (chunkSize & 0x000000FF));
			byteBuffer.put(1, (byte) ((chunkSize >>> 8) & 0x000000FF));
			
			// Write chunk
			int byteWritten = socketChannel.write(byteBuffer);
			if(byteWritten == -1) throw new IOException("Tool disconnected");
		}
	}
	
	private ATerm readTermFromChannel(ByteBuffer byteBuffer) throws IOException{
		BinaryReader binaryReader = new BinaryReader((PureFactory) factory);
		while(!binaryReader.isDone()){
			byteBuffer.clear();
			byteBuffer.limit(2);
			do{
				int bytesRead = socketChannel.read(byteBuffer);
				if(bytesRead == -1) throw new IOException("Tool disconnected");
			}while(byteBuffer.hasRemaining()); // <-- Workaround for a NIO bug. Blocking mode doesn't work properly.
			byteBuffer.flip();
			
			int chunkSize = (byteBuffer.get(0) & 0x000000FF) + ((byteBuffer.get(1) & 0x000000FF) << 8);
			
			byteBuffer.clear();
			byteBuffer.limit(chunkSize);
			do{
				int bytesRead = socketChannel.read(byteBuffer);
				if(bytesRead == -1) throw new IOException("Tool disconnected");
			}while(byteBuffer.hasRemaining()); // <-- Workaround for a NIO bug. Blocking mode doesn't work properly.
			byteBuffer.flip();
			
			binaryReader.deserialize(byteBuffer);
		}
		
		return binaryReader.getRoot();
	}
	
	private void shakeHands() throws IOException{
		ByteBuffer handShakeBuffer = ByteBuffer.allocateDirect(HANDSHAKEBUFFERSIZE);
		
		ATerm toolKey = factory.makeAppl(factory.makeAFun(toolname, 1, false), factory.makeInt(toolid));

		// Send the tool id.
		writeTermToChannel(toolKey, handShakeBuffer);

		// Receive signature.
		handShakeBuffer.clear();
		readTermFromChannel(handShakeBuffer);

		// TODO Check the signature.
		byte sigOKByte = 1;

		// Send signature confirmation.
		handShakeBuffer.clear();
		handShakeBuffer.put(sigOKByte);
		handShakeBuffer.flip();
		socketChannel.write(handShakeBuffer);

		// Receive the (permanent) tool key.
		ATerm newToolKey = readTermFromChannel(handShakeBuffer);

		int toolID = ((ATermInt) newToolKey.getChildAt(0)).getInt();
		toolid = toolID;
		
		sendTerm(CONNECT, newToolKey);
	}
	
	private void sendTerm(byte operation, ATerm term){
		synchronized(writeBuffer){
			writeBuffer.clear();
			writeBuffer.put(operation);
			writeBuffer.flip();
			
			try{
				int bytesWritten = socketChannel.write(writeBuffer);
				if(bytesWritten == -1) throw new IOException("Tool disconnected");
				
				writeTermToChannel(term, writeBuffer);
			}catch(IOException ioex){
				throw new RuntimeException(ioex);
			}
		}
	}
	
	private class OperationTermPair{
		public byte operation;
		public ATerm aTerm;
	}
	
	public OperationTermPair readTerm() throws IOException{
		OperationTermPair otp = new OperationTermPair();
		
		synchronized(readBuffer){
			readBuffer.clear();
			readBuffer.limit(1);
			int byteRead = socketChannel.read(readBuffer);
			if(byteRead == -1) return null;
			readBuffer.flip();
			
			otp.operation = readBuffer.get(0);
			
			otp.aTerm = readTermFromChannel(readBuffer);
		}
		
		return otp;
	}
	
	private void setRunning(boolean state){
		running = state;
	}
	
	public void run(){
		setRunning(true);
		try{
			while(running){
				handleIncomingTerm();
			}
		}catch(IOException ioex){
			ioex.printStackTrace();
			System.exit(0);
		}
	}
	
	public void stopRunning(){
		setRunning(false);
	}
	
	public void handleIncomingTerm() throws IOException{
		OperationTermPair otp = readTerm();
		if(otp == null){
			if(expectingDisconnect){
				setRunning(false);
				return;
			}
			throw new IOException("Tool disconnected.");
		}
		
		handleIncomingTerm(otp.operation, otp.aTerm);
	}
	
	public void handleIncomingTerm(byte operation, ATerm t){
		handleTerm(operation, t);
	}
	
	protected void handleTerm(byte operation, ATerm t){
		switch(operation){
			case DO:
				handler(factory.make("rec-do(<term>)", t));
				sendTerm(ACKDO, empty);
				break;
			case EVAL:
				ATermAppl result = (ATermAppl) handler(factory.make("rec-eval(<term>)", t));
				sendTerm(VALUE, result.getArgument(0));
				break;
			case ACKEVENT:
				ATerm ackEvent = ((ATermList) t).getLast();
				handler(factory.make("rec-ack-event(<term>)", ackEvent));
				ackEvent((ATermList) t);
				break;
			case RESPONSE:
				AFun responseSourceFun = ((ATermAppl) t).getAFun();
				
				JobQueue requestQueue;
				synchronized(queues){
					requestQueue = queues.get(responseSourceFun);
				}
				if(requestQueue == null){
					System.err.println("Received response on a non-existent request: " + responseSourceFun);
					return;
				}
				requestQueue.recResponse(t);
				break;
			case TERMINATE:
				handler(factory.make("rec-terminate(<term>)", t));
				expectingDisconnect = true;
				sendTerm(END, empty);
				break;
			case PERFORMANCESTATS:
				ATerm performaceStats = getPerformanceStats();
				sendTerm(PERFORMANCESTATS, performaceStats);
				break;
			case DEBUGPERFORMANCESTATS:
				ATerm debugPerformaceStats = getPerformanceStats();
				sendTerm(DEBUGPERFORMANCESTATS, debugPerformaceStats);
				break;
			case END:
				connected = false;
				setRunning(false);
				closeConnection();
				break;
			default:
				throw new RuntimeException("Unknown tool operation with ID: " + operation);
		}
	}
	
	public void sendTerm(ATerm term) throws IOException{
		throw new IOException("Unsupported operation. Unable to send term: "+term);
	}
	
	public void sendEvent(ATerm term){
		postEvent(term);
	}
	
	public void postEvent(ATerm term){
		long threadId = Thread.currentThread().getId();
		ThreadLocalJobQueue threadLocalQueue = null;
		synchronized(threadLocalQueues){
			threadLocalQueue = threadLocalQueues.get(new Long(threadId));
			if(threadLocalQueue == null){
				threadLocalQueue = new ThreadLocalJobQueue();
				threadLocalQueues.put(new Long(threadId), threadLocalQueue);
			}
		}
		threadLocalQueue.postEvent(term, threadId);
	}
	
	public ATerm postRequest(ATerm term){
		long threadId = Thread.currentThread().getId();
		ThreadLocalJobQueue threadLocalQueue = null;
		synchronized(threadLocalQueues){
			threadLocalQueue = threadLocalQueues.get(new Long(threadId));
			if(threadLocalQueue == null){
				threadLocalQueue = new ThreadLocalJobQueue();
				threadLocalQueues.put(new Long(threadId), threadLocalQueue);
			}
		}
		return threadLocalQueue.postRequest(term, threadId);
	}
	
	private void ackEvent(ATermList ackEvent){
		ATerm event = ackEvent.getFirst();
		
		AFun sourceFun = ((ATermAppl) event).getAFun();
		
		JobQueue eventQueue;
		synchronized(queues){
			eventQueue = queues.get(sourceFun);
		}
		eventQueue.ackEvent();
	}
	
	private void closeConnection(){
		Socket socket = socketChannel.socket();
		
		// Close the in- output stream of the socket to ensure that the file descriptors are closed
		// immidiately and NOT whenever the JVM feels like it.
		try{
			if(!socket.isInputShutdown()) socket.shutdownInput();
		}catch(IOException ioex){
			// Ignore
		}
		try{
			if(!socket.isOutputShutdown()) socket.shutdownOutput();
		}catch(IOException ioex){
			// Ignore
		}

		try{
			if(!socket.isClosed()) socket.close();
		}catch(IOException ioex){
			ioex.printStackTrace();
		}
	}

	/**
	 * A job.
	 * 
	 * @author Arnold Lankamp
	 */
	private static class Job{
		public final ATerm term;
		public final long threadId;
		public ATerm response; // Optional field
		
		/**
		 * Constructor.
		 * 
		 * @param term
		 *            The message associated with this event.
		 * @param threadId
		 *            The id of the thread associated with this event.
		 */
		public Job(ATerm term, long threadId){
			super();
			
			this.term = term;
			this.threadId = threadId;
		}
	}

	/**
	 * This job queue holds all the jobs that are send from a single source.
	 * 
	 * @author Arnold Lankamp
	 */
	private class JobQueue{
		private final List<Job> jobs;
		private Job current;

		/**
		 * Default constructor.
		 */
		public JobQueue(){
			super();
			
			jobs = new LinkedList<Job>();
			
			current = null;
		}
		
		/**
		 * Schedules the given job for transmission to the ToolBus. If there are currently no
		 * jobs in the queue, the event will be send immediately; otherwise we'll need to wait till
		 * all the requests (of the same source) that where previously scheduled have been send and
		 * acknowledged.
		 * 
		 * @param job
		 *            A container that hold the details about the request.
		 */
		public synchronized void post(Job job){
			if(current == null){
				sendTerm(EVENT, job.term);
				current = job;
			}else{
				jobs.add(job);
			}
		}

		/**
		 * Returns the next job in the queue.
		 * 
		 * @return The next job in the queue; null if the queue is empty.
		 */
		public synchronized Job getNext(){
			if(!jobs.isEmpty()) return jobs.remove(0);
			
			return null;
		}
		
		/**
		 * Notifies the thread local queue of the acknowledgement and executes the next queued job
		 * (if present).
		 */
		private synchronized void acknowledge(){
			long threadId = current.threadId;
			ThreadLocalJobQueue threadLocalQueue;
			synchronized(threadLocalQueues){
				threadLocalQueue = threadLocalQueues.get(new Long(threadId));
			}
			threadLocalQueue.acknowledge();
			
			Job next = getNext();
			current = next;
			if(next != null){
				sendTerm(EVENT, next.term);
			}
		}

		/**
		 * Acknowledges the last event that was send from the source this queue is associated with.
		 * It will execute the next job in the queue if there are any.
		 */
		public void ackEvent(){
			acknowledge();
		}
		
		/**
		 * Acknowledges the last request that was send from the source this queue is associated
		 * with. It will execute the next job in the queue if there are any.
		 * 
		 * @param response
		 *            The response.
		 */
		public synchronized void recResponse(ATerm response){
			synchronized(current){
				current.response = response;
				current.notify();
			}
			
			acknowledge();
		}
	}
	
	/**
	 * This job queue holds all the jobs that are posted by a certain thread.
	 * 
	 * @author Arnold Lankamp
	 */
	private class ThreadLocalJobQueue{
		private final List<Job> requests;
		
		private boolean awaitingAck;

		/**
		 * Default constructor.
		 */
		public ThreadLocalJobQueue(){
			super();
			
			requests = new LinkedList<Job>();
		}
		
		/**
		 * Schedules the given event for transmission to the ToolBus. If there are currently no
		 * jobs in the thread local queue, the event will be send immediately; otherwise we'll need
		 * to wait till all the jobs (associated with the current thread) that were previously
		 * scheduled have been submitted to the request queue.
		 * 
		 * @param aTerm
		 *            The term that hold the details about the event.
		 * @param threadId
		 *            The id of the thread associated with the event.
		 */
		public synchronized void postEvent(ATerm aTerm, long threadId){
			Job request = new Job(aTerm, threadId);
			
			if(!awaitingAck){
				AFun sourceFun = ((ATermAppl) aTerm).getAFun();
				
				JobQueue requestQueue;
				synchronized(queues){
					requestQueue = queues.get(sourceFun);
					if(requestQueue == null){
						requestQueue = new JobQueue();
						queues.put(sourceFun, requestQueue);
					}
				}
				requestQueue.post(request);
				awaitingAck = true;
			}else{
				requests.add(request);
			}
		}
		
		/**
		 * Schedules the given request for transmission to the ToolBus. If there are currently no
		 * jobs in the thread local queue, the event will be send immediately; otherwise we'll need
		 * to wait till all the jobs (associated with the current thread) that were previously
		 * scheduled have been submitted to the request queue.
		 * 
		 * @param aTerm
		 *            The term that hold the details about the request.
		 * @param threadId
		 *            The id of the thread associated with the request.
		 * @return The received response on the issued request.
		 */
		public synchronized ATerm postRequest(ATerm aTerm, long threadId){
			Job job = new Job(aTerm, threadId);
			synchronized(job){
				if(!awaitingAck){
					AFun sourceFun = ((ATermAppl) aTerm).getAFun();
					
					JobQueue requestQueue;
					synchronized(queues){
						requestQueue = queues.get(sourceFun);
						if(requestQueue == null){
							requestQueue = new JobQueue();
							queues.put(sourceFun, requestQueue);
						}
					}
					requestQueue.post(job);
					awaitingAck = true;
				}else{
					requests.add(job);
				}
				
				while(job.response == null){
					try{
						job.wait();
					}catch(InterruptedException irex){
						// Ignore this, since I don't want to know about it.
					}
				}
			}
			return job.response;
		}
		
		/**
		 * Returns the next job in the queue.
		 * 
		 * @return The next job in the queue; null if the queue is empty.
		 */
		public synchronized Job getNext(){
			if(!requests.isEmpty()) return requests.remove(0);
			
			return null;
		}
		
		/**
		 * Acknowledges the last job that was send from the source the current thread is associated
		 * with. It will submit the next job in the queue if there are any.
		 */
		public synchronized void acknowledge(){
			Job next = getNext();
			if(next == null){
				awaitingAck = false;
			}else{
				ATerm term = next.term;
				AFun sourceFun = ((ATermAppl) term).getAFun();
				
				JobQueue requestQueue;
				synchronized(queues){
					requestQueue = queues.get(sourceFun);
					if(requestQueue == null){
						requestQueue = new JobQueue();
						queues.put(sourceFun, requestQueue);
					}
				}
				
				requestQueue.post(next);
			}
		}
	}
	
	/**
	 * Gathers performance statistics about this tool, like memory usage and the user-/system-time
	 * spend per thread.
	 * 
	 * @return performance statictics.
	 */
	private ATerm getPerformanceStats(){
		// Type stuff
		ATerm remote = factory.makeAppl(factory.makeAFun("legacy", 0, true));
		ATerm toolType = factory.makeAppl(factory.makeAFun("type", 1, false), remote);
		
		ATerm java = factory.makeAppl(factory.makeAFun("Java", 0, true));
		ATerm toolLanguage = factory.makeAppl(factory.makeAFun("language", 1, false), java);
		
		ATerm tool = factory.makeAppl(factory.makeAFun("tool", 2, false), toolType, toolLanguage);
		
		// Memory stuff
		MemoryMXBean mmxb = ManagementFactory.getMemoryMXBean();
		long heapMemoryUsage = mmxb.getHeapMemoryUsage().getUsed();
		long nonHeapMemoryUsage = mmxb.getNonHeapMemoryUsage().getUsed();
		
		ATerm heapUsage = factory.makeAppl(factory.makeAFun("heap-usage", 1, false), factory.makeInt(((int) (heapMemoryUsage / 1024))));
		ATerm nonHeapUsage = factory.makeAppl(factory.makeAFun("non-heap-usage", 1, false), factory.makeInt(((int) (nonHeapMemoryUsage / 1024))));
		
		ATerm memory = factory.makeAppl(factory.makeAFun("memory-usage", 2, false), heapUsage, nonHeapUsage);
		
		// Thread stuff
		ThreadGroup currentThreadGroup = Thread.currentThread().getThreadGroup();
		Thread[] relevantThreads = new Thread[currentThreadGroup.activeCount() * 2 + 10]; // Create an array that's more then big enough.
		currentThreadGroup.enumerate(relevantThreads);
		
		Set<Long> relevantThreadIds = new HashSet<Long>();
		for(int i = 0; i < relevantThreads.length; i++){
			Thread thread = relevantThreads[i];
			if(thread != null){
				relevantThreadIds.add(new Long(thread.getId()));
			}
		}
		
		ThreadMXBean tmxb = ManagementFactory.getThreadMXBean();
		
		ATerm threads;
		
		long[] threadIds = tmxb.getAllThreadIds();
		int nrOfThreads = threadIds.length;
		try{
			ATermList threadsList = factory.makeList();
			for(int i = 0; i < nrOfThreads; i++){
				long threadId = threadIds[i];
				if(relevantThreadIds.contains(new Long(threadId))){ // Only list the info if we're interested in it.
					ThreadInfo ti = tmxb.getThreadInfo(threadId);
					if(ti != null){
						String threadName = ti.getThreadName();
						long userTime = tmxb.getThreadUserTime(threadIds[i]);
						long systemTime = tmxb.getThreadCpuTime(threadIds[i]) - userTime;
						
						if((userTime + systemTime) <= 0) continue;
						
						ATerm userTimeTerm = factory.makeAppl(factory.makeAFun("user-time", 1, false), factory.makeInt(((int) (userTime / 1000000))));
						ATerm systemTimeTerm = factory.makeAppl(factory.makeAFun("system-time", 1, false), factory.makeInt(((int) (systemTime / 1000000))));
						ATerm thread = factory.makeAppl(factory.makeAFun(threadName, 2, false), userTimeTerm, systemTimeTerm);
						
						threadsList = factory.makeList(thread, threadsList);
					}
				}
			}
			
			threads = factory.makeAppl(factory.makeAFun("threads", 1, false), threadsList);
		}catch(UnsupportedOperationException uoex){
			threads = factory.make("threads(unsupported-operation)");
			System.out.println("Thread time profiling is not supported by this JVM.");
		}
		
		return factory.makeAppl(factory.makeAFun("performance-stats", 3, false), tool, memory, threads);
	}
}
