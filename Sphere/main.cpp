//
//  main.cpp
//  Sphere
//
//  Created by Alexander Laquitara on 6/19/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
#include "Sphere.h"
#include <iostream>
using namespace std;

void printSphereInfo(Sphere* s)
{
    cout<<"radius is: "<< s->getRadius()<< endl;
    cout<<"volume is: "<< s-> getVolume()<<endl;
    
}



int main(int argc, const char * argv[]) {
    double radius;
    cout<< "what is the radius of the sphere? " << endl;
    cin>> radius;
    
    Sphere s;
    
    s.setRadius(radius);
    
    printSphereInfo(&s);
    
    
    return 0;
}
