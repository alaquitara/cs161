//
//  Car.h
//  CarPractice
//
//  Created by Alexander Laquitara on 6/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
#include <string>
#ifndef __CarPractice__Car__
#define __CarPractice__Car__

#include <stdio.h>

class Car
{
private:
    int year, speed;
    std::string make;
public:
    Car();
    Car(int, std::string, int);
    void setYear(int);
    void setMake (std::string);
    void setSpeed (int);
    int getSpeed ();
    void accelerate ();
    void brake ();
    
};

#endif /* defined(__CarPractice__Car__) */
