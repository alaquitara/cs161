/*********************************************************************
** Author: Alexander Laquitara
** Date:5/6/2015
** Description:This is the Line segment  class function implementation file
*********************************************************************/


#include <cmath>
#include "LineSegment.hpp"
#include "Point.hpp"
LineSegment::LineSegment(Point p1, Point p2) // constructor takes two Point parameters and passes them to the set 
                                             //methods to initialize the data members.
{
	setEnd1(p1);
	setEnd2(p2);
}

LineSegment::LineSegment() //Default constructor creates Point objects and assigns them to setEnd1/2 -> end1/2
{
	Point p1;
	Point p2;
	setEnd1(p1);
	setEnd2(p2);
}
void LineSegment::setEnd1(Point p1)// like in Point.cpp sets end1 to p1 due to end1 being private
{
	end1 = p1;
}
void LineSegment::setEnd2(Point p2)// like in Point.cpp sets end2 to p2 due to end2 being private
{
	end2 = p2;
}

Point LineSegment:: getEnd1()//retrieves contents of end1
{
	return end1;
}

Point LineSegment::getEnd2()//retrieves contents of end2
{
	return end2;
}
/*********************************************************************

** Description: returns the length of the LineSegment. 
                
**

*********************************************************************/
double LineSegment::length()
{
	return end1.distanceTo(end2);
}

/*********************************************************************

** Description:returns the slope of the LineSegment 

**

*********************************************************************/
double LineSegment::slope() //referenced http://stackoverflow.com/questions/18939869/how-to-get-the-slope-of-a-linear-regression-line-using-c
{
	return (end1.getYCoord() - end2.getYCoord()) / (end1.getXCoord() - end2.getXCoord());

}

