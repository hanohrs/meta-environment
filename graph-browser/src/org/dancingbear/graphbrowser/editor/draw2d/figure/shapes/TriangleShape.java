/*************************************************************************
 * Copyright (c) 2009 University of Amsterdam, The Netherlands.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 ************************************************************************/
package org.dancingbear.graphbrowser.editor.draw2d.figure.shapes;

import org.eclipse.draw2d.Graphics;
import org.eclipse.draw2d.Shape;
import org.eclipse.draw2d.geometry.PointList;
import org.eclipse.draw2d.geometry.Rectangle;

/**
 * Representation of a triangle.
 * 
 * @author Jeroen van Schagen
 * @date 09-03-2009
 */
public class TriangleShape extends Shape {

    /**
     * @see Shape#fillShape(Graphics)
     */
    @Override
    protected void fillShape(Graphics graphics) {
        PointList points = calculatePoints();
        graphics.fillPolygon(points);
    }

    /**
     * @see Shape#outlineShape(Graphics)
     */
    @Override
    protected void outlineShape(Graphics graphics) {
        PointList points = calculatePoints();
        graphics.drawPolygon(points);
    }

    /**
     * Retrieve points of triangle, based on current boundaries.
     * 
     * @return points
     */
    private PointList calculatePoints() {
        Rectangle bounds = getBounds();
        PointList triangle = new PointList(3);
        triangle.addPoint(bounds.getTop());
        triangle.addPoint(bounds.getBottomLeft());
        triangle.addPoint(bounds.getBottomRight());
        return triangle;
    }

}