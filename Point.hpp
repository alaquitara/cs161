//POINT.hpp
/*********************************************************************
** Author: Alexander Laquitara
** Date:5/6/2015
** Description:This is the Point class header file
*********************************************************************/
#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
	double xCoord; //x cordinates
	double yCoord;//y cordinates
public:
	Point(); //default constructor
	Point(double, double); //2 parameter constructor
	void setXCoord(double); //Mutator
	void setYCoord(double);//Mutator
	double getXCoord();//Accessor
	double getYCoord();//Accessor
	double distanceTo( Point &point2);  //referenced http://stackoverflow.com/questions/1426986/what-does-in-a-function-declaration-mean
										//Removed the constant
};

#endif