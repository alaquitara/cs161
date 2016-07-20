//
//  Car.cpp
//  CarPractice
//
//  Created by Alexander Laquitara on 6/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

Car:: Car ()
{
    year= 0;
    make = " ";
    speed = 0;
}

Car::Car (int yearIn, string makeIn, int speedIn)
{
    setYear(yearIn);
    setMake(makeIn);
    setSpeed(0);
    
}

void Car:: setYear(int yearIn)
{
    year= yearIn;
}

void Car:: setMake(string makeIn)
{
    make=makeIn;
}

void Car:: setSpeed(int speedIn)
{
    speed=speedIn;
}

int Car::getSpeed()
{
    return speed;
}

void Car:: accelerate()
{
    if (speed + 10 <= 80)
    {
        speed += 10;
    }
        else
        {
            speed = 80;
        }
}

void Car:: brake()
{
    if (speed -10 >= 0)
    {
        speed -= 10;
    }
        else
        {
            speed = 0;
        }
    }


int main()
{
    int speedIn=0, yearIn, menu;
    string makeIn;
    
    cout<<" what make is your car" << endl;
    cin>> makeIn;
    cout<<"what year is your car" << endl;
    cin>> yearIn;
    
    Car mycar(yearIn, makeIn, speedIn);
    
    
    while (menu != 3)
    {
        cout<< "Enter 1 to accelerate, 2 to brake, or 3 to quit" << endl;
        cin>> menu;
        
        switch(menu)
        {
            case 1:
                mycar.accelerate();
                break;
            case 2:
                mycar.brake();
                break;
            case 3:
                exit(EXIT_FAILURE);
            default: ;
                cout<< "please choose a valid option (1,2,3)" <<endl;
        }
        if (menu !=3)
        {
            cout<<"Your car speed is now" << mycar.getSpeed()<<endl;
        
        }
        
    }
        return 0;
    
}