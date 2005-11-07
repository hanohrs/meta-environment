package nl.cwi.sen1.gui.plugin;

import java.awt.FontMetrics;
import java.awt.Graphics2D;
import java.awt.Polygon;
import java.awt.Rectangle;
import java.awt.Shape;
import java.awt.geom.AffineTransform;
import java.awt.geom.Ellipse2D;
import java.awt.geom.PathIterator;
import java.awt.geom.Point2D;
import java.awt.geom.Rectangle2D;

import edu.berkeley.guir.prefuse.VisualItem;
import edu.berkeley.guir.prefuse.render.TextItemRenderer;

public class GraphNodeRenderer extends TextItemRenderer {
	
	protected Shape getRawShape(VisualItem item) {
		GraphNode node = (GraphNode) item.getEntity();
		Rectangle2D bounds = super.getRawShape(item).getBounds2D();
		double x = bounds.getX();
		double y = bounds.getY();
		double width = bounds.getWidth();
		double height = bounds.getHeight();
		Shape result = null;
		
		nl.cwi.sen.api.graph.graph.types.Shape shape = node.getShape();
		if (shape.isDiamond()) {
			result = getDiamondShape(x, y, width, height);
		}
		else if (shape.isBox()) {
			result = getBoxShape(x, y, width, height);
		}
		else if (shape.isEllipse()) {
			result = getEllipseShape(x, y, width, height);
		}
		else if (shape.isCircle()) {
			result = getCircleShape(x, y, width, height);
		}
		else {
			result = getBoxShape(x, y, width, height);			
		}
		
		return result;
	}

	private Shape getCircleShape(double x, double y, double width, double height) {
		double radius = Math.max(width, height);
		return new Ellipse2D.Double(x, y, radius, radius);
	}

	private Shape getEllipseShape(double x, double y, double width, double height) {
		return new Ellipse2D.Double(x, y, width, height);
	}

	private Shape getBoxShape(double x, double y, double width, double height) {
		return new Rectangle2D.Double(x, y, width, height);
	}

	private Shape getDiamondShape(double x, double y, double width, double height) {
		int ix = (int) x;
		int iy = (int) y;
		int iw = (int) width;
		int ih = (int) height;
		int[] xs = new int[] {ix - (iw/ih)*(ih/2), ix + iw / 2, ix + iw + (iw/ih)*(ih/2), ix + iw / 2 };
		int[] ys = new int[] {iy + ih / 2, iy + ih + (ih/iw)*(iw / 2), iy + ih / 2, iy - (ih/iw)*(iw / 2)  };
			
		return new Polygon(xs, ys, 4);
	}
	
}