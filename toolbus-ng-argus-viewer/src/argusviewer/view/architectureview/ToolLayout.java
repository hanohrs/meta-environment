package argusviewer.view.architectureview;

import java.util.Iterator;

import org.apache.log4j.Logger;

import prefuse.action.layout.Layout;
import prefuse.util.PrefuseLib;
import prefuse.visual.DecoratorItem;
import prefuse.visual.VisualItem;

/**
 * The layout used to align statements under their corresponding tool or tool.
 * Note that statements are set to invisible if the corresponding entity is invisble.
 *
 * @author Riccardo Lippolis
 * @author Johnny Eradus
 * @author Frank Oppedijk
 * @author Ivo Tamboer
 */
public class ToolLayout extends Layout {

	private static final int HORIZONTAL_STEP = 100;
	
	private static final int HORIZONTAL_MARGIN = 50;
	private static final int VERTICAL_MARGIN = 50;
	
	public static final double TOOL_LABEL_BASE = ToolRenderer.TOOL_BASESIZE * 0.7;

	private static Logger log = Logger.getLogger(ToolLayout.class);
	
	private ProcessLayout m_processLayout;
	
	/**
	 * Create a new Tool layout for the specified group.
	 *
	 * @param processLayout the ProcessLayout which lays out the processes above the Tools.
	 * @param group The group of visual items on which the layout will be applied
	 */
	public ToolLayout(String group, ProcessLayout processLayout) {
		super(group);
		m_processLayout = processLayout;
		log.debug("ToolLayout constructer called.");
	}

	/**
	 * {@inheritDoc}
	 */
	@SuppressWarnings("unchecked")
	@Override
	public void run(double frac) {
		log.debug("ToolLayout run called");

		// Coordinates of bottom left edge of rectangle around all processes
		double xPos =  m_processLayout.getBounds().getMinX();
		double yPos = m_processLayout.getBounds().getMaxY();

		// Coordinates of first tool
		xPos += HORIZONTAL_MARGIN;
		yPos += VERTICAL_MARGIN;
		
		Iterator<VisualItem> visualStatements = m_vis.items(m_group);
		while (visualStatements.hasNext()) {
			VisualItem currentTool = visualStatements.next();

				log.debug(currentTool);
				setX(currentTool, null, xPos);
				setY(currentTool, null, yPos);					
				PrefuseLib.updateVisible(currentTool, true);				

				xPos += HORIZONTAL_STEP;
		}
		
		// Layout the labels
		Iterator<DecoratorItem> labels = m_vis.items(ArchitectureView.TOOL_LABEL);
		while (labels.hasNext()) {
			log.debug("tooling some label");	
			DecoratorItem label = labels.next();
			log.debug(label);
			VisualItem parentEntity = label.getDecoratedItem();

			// Position the label under the Entity it belongs to
			setX(label, null, parentEntity.getX());
			setY(label, null, parentEntity.getY() + TOOL_LABEL_BASE);

			// Set the visibility of a label equal to the visibility of the Entity
			label.setVisible(parentEntity.isVisible());
		}
	}
}
