//
//  Date.cpp
//  Date
//
//  Created by Alexander Laquitara on 6/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "Date.h"
using namespace std;
Date::Date ()
{
    setDay(1);
    setMonth(1);
    setYear(2001);
}

Date::Date (int dayIn, int monthIn, int yearIn)
{
    setYear(yearIn);
    setDay(dayIn);
    setMonth(monthIn);
}

void Date:: setMonth(int monthIn)
{
    month= monthIn;
}

void Date:: setDay(int dayIn)
{
    ((if dayIn > 0 &&dayIn <=31) && ((month ==1) || (month==3) || (month ==5) || (month==8) || (month ==10)|| (month ==12)))
    {
    day = dayIn;
    }
}

void Date:: setYear(int yearIn)
{
    year = yearIn;
}

void Date:: print1()
{
    cout << "\n" << month << "/" <<day << "/" << year%100 << endl;
}

void Date:: print2( int inMonth)
{
    inMonth=13;
    vector <string> name;
    name.push_back(" ","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December");
    month =  name[inMonths];
    
    
}
