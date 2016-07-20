//
//  Sphere.h
//  Sphere
//
//  Created by Alexander Laquitara on 6/19/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

#ifndef __Sphere__Sphere__
#define __Sphere__Sphere__

#include <stdio.h>

class Sphere
{
private:
    double radius;
public:
    Sphere ();
    Sphere(double);
    void setRadius (double);
    double getRadius();
    double getVolume();
};

#endif /* defined(__Sphere__Sphere__) */
