//
//  main.cpp
//  sort
//
//  Created by Alexander Laquitara on 6/17/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

void sortNum (int& , int& , int& );
void sort(int num1, int num2, int num3);

int main() {
    
    int num1, num2, num3;
    cout<< "enter 3 integers: " <<endl;
    cin>> num1 >> num2 >> num3;

    //int num1 = 1;
   // int num2 = 2;
    //int num3 = 3;
    
    //cout<< "the 3 numbers in acending order are : " << sortNum(num1, num2, num3)<<endl;
    sortNum(num1, num2, num3);
    
    //sort(num1, num2, num3);
    return 0;
}

void sortNum (int &a, int &b, int &c)
{
    if (a>b){
        swap(a,b);
    }
    if (a > c) {
        swap(a,c);
    }
    if (b>c){
        swap(b,c);
    }
    cout << a<< b<< c<< endl;
}

void sort(int num1, int num2, int num3)
{
    if ((num1 <= num2) && (num1 <= num3))
    {
        cout <<num1 <<endl;
        if (num2 <= num3)
        {
            cout <<num2 << endl;
            cout <<num3 << endl;
        }
        else{
            cout <<num3 << endl;
            cout <<num2 << endl;
        }
    }
    else if ((num2 <= num1) && (num2 <= num3))
    {
        cout << num2 << endl;
        if (num1 <= num3)
        {
            cout << num1 << endl;
            cout<< num3<< endl;
        }
        else{
            cout << num3 << endl;
            cout << num1 << endl;
            
        }
    }
    else if ((num3 <= num1) && (num3 <= num2))
    {
        cout <<num3 <<endl;
        if (num1 <= num2)
        {
            cout << num1 << endl;
            cout <<num2 << endl;
        }
        else{
            cout << num2 << endl;
            cout<< num1 << endl;
        }
    }
    
    
}
