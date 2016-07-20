//
//  main.cpp
//  pointerPractice
//
//  Created by Alexander Laquitara on 6/18/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

#include <iostream>

using namespace std;

double arAvg(double array[], const int size)
{
    double average, total = 0;
    
    for(int count=0; count< size; count++)
        total += array[count];
        average = total / size;
    return average;
}





int main() {

    int size;
    cout<< "how many values do you wish to enter? " << endl;
    cin>>size;
    
    double *dptr= NULL;
    dptr = new double [size];
    
    for (int count = 0; count<size; count++)
    {
        cout<< "enter a number" << endl;
        cin>>dptr[count];
    }
    
    cout<<"the average is: "<< arAvg(dptr, size)<< endl;
    
    delete[] dptr;
    size=0;
    return 0;
    
}

    
    
    
    
    
    
    
    
    
    /*int count = 10;
    int *countAddr;
    
    countAddr= &count;
    
    cout<< countAddr;
    
    
    const int size = 2;
    int array[size] = {1,2};
    int *ptr;
    
   
    for (int x=0; x<size; x++)
    {
        ptr= &array[x];
        cout << *ptr << endl;
    }
    
    
    
    
    return 0;
} */
