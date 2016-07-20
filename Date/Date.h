//
//  Date.h
//  Date
//
//  Created by Alexander Laquitara on 6/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

#ifndef __Date__Date__
#define __Date__Date__

#include <stdio.h>

class Date
{
private:
    int day, month, year;
public:
    Date ();
    Date (int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void print1 ();
    void print2 (const int);
    void print3 ();
};

#endif /* defined(__Date__Date__) */
