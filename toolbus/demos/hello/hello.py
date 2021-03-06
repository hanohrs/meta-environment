# hello.py -- hello tool in Python

import TB
import sys
import __main__		# Don't forget this one!

def rec_terminate(cid, A):
	sys.exit(0)

def get_text(cid):
	return TB.make("snd-value(text(<str>))", 
           "Hello World, my first ToolBus tool in Python!\n")

cid = TB.parseArgs(sys.argv, __main__)
TB.connect(cid)
TB.eventloop()
