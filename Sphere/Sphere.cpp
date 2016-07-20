//
//  Sphere.cpp
//  Sphere
//
//  Created by Alexander Laquitara on 6/19/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

#include "Sphere.h"
#include <cmath>
using namespace std;

Sphere::Sphere()
{
    radius= 0.0;
}

Sphere::Sphere(double radiusIn)
{
    setRadius(radiusIn);
}

void Sphere::setRadius(double radiusIn)
{
    radius=radiusIn;
}

double Sphere::getRadius()
{
    return radius;
}

double Sphere::getVolume()
{
    return 4.0/3.0 * 3.14159 * pow(radius,3);

}



