/*********************************************************************
** Author: Alexander Laquitara
** Date:5/6/2015
** Description:This is the Line segment header file
*********************************************************************/

//LineSegment.hpp

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{
	private:
		Point end1; //represents endpoint 1
		Point end2;//represents endpoint 2
    
    public:
		
    LineSegment();  //default constructor
		LineSegment(Point, Point); //constructor with two points as parameters
		void setEnd1(Point);//Mutator
		void setEnd2(Point);//Mutator
		Point getEnd1();//Accessor
		Point getEnd2();//Accessor
		double length();//returns the length of the line segment
		double slope();//returns the slope of the line segment

};

#endif