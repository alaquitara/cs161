/*********************************************************************
** Author: Alexander Laquitara
** Date:5/6/2015
** Description:This is the Point class function implementation file
*********************************************************************/

#include <cmath>//declares math functions which will allow for the math required in the distanceTo method (sqrt())
#include "Point.hpp"
//#include "LineSegment.hpp"
Point::Point() //default constructor which sets the x and y Coordinates to 0
{
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double inXCoord, double inYCoord) //Constructor that takes two double parameters and passes those values to the set methods to initialize its fields.
{
	setXCoord(inXCoord);
	setYCoord(inYCoord);
}

void Point::setXCoord(double inXCoord) //sets xCord to inXCoord due to xCoord being private
{
	xCoord = inXCoord;
}
void Point::setYCoord(double inYCoord) //sets yCord to inyCoord due to yCoord being private
{
	yCoord = inYCoord;
}
double Point::getXCoord() //retrieves contents of xCoord due to it being private
{
	return xCoord;
}
double Point::getYCoord() //retrieves contents of yCoord due to it being private
{
	return yCoord;
}

/*********************************************************************

** Description:method called distanceTo that takes as a parameter a constant
              reference to another Point and RETURNS THE DISTANCE from the
			  Point that was passed as a parameter to the Point that we called the method of.
**

*********************************************************************/
double Point::distanceTo( Point &p2)   //removed the const, it was causing a common error on Piazza.  
{
	double xLine;
	double yLine;
	double distance;

	xLine = getXCoord() - p2.getXCoord();
	yLine = getYCoord() - p2.getYCoord();

	distance = sqrt(pow(xLine, 2) + pow(yLine, 2));

	return distance;
}
