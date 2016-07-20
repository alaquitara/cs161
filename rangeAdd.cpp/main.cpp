//
//  main.cpp
//  rangeAdd.cpp
//
//  Created by Alexander Laquitara on 6/11/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

#include <iostream>
using namespace std;

void rangeAdd (int i, int j)
{
    int num1, num2, counter;
    int running_sum=0;
    
    cout<< "Please enter a number"<<endl;
    cin>>num1;
    
    cout<< "Please enter another number"<<endl;
    cin >>num2;
    
    if (num1> num2)
    {
        running_sum= num2;
        for (counter = num2 +1; counter <= num1; counter++)
    
        {
        running_sum += counter;
        }
         cout <<"The total of all numbers in range is: "<< running_sum<< endl;
    }
    
    else if (num1<num2)
    {
        running_sum = num1;
        for (counter = num1 + 1; counter <= num2; counter++)
        {
            running_sum += counter;
        }
        cout <<"The total of all numbers in range is: "<< running_sum<< endl;
    }
    
    
    else if (num1==num2)
    {
        running_sum= num1+num2;
        cout<< "The total of all numbers in range is: "<< running_sum << endl;
    }
   
}

int main() {
   
    int i,j;
    rangeAdd(i,j);
    
    return 0;
}
