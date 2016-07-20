//
//  main.cpp
//  enterNum
//
//  Created by Alexander Laquitara on 6/11/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

#include <iostream>
using namespace std;

void bigLittle (int i)
{
    int inNum,  counter;
    double currentNum, min_val,  max_val;
    
    cout<< "how many nums?"<<endl;
    cin>> inNum;
    
    for (counter=1; counter <= inNum; counter++)
    {
        cout<< "input a number : " <<endl;
        cin>>currentNum;
        
        if(counter == 1)
            (max_val= currentNum) && (min_val = currentNum);
        if (currentNum >= max_val)
            max_val = currentNum;
        if(currentNum <= min_val)
            min_val = currentNum;
        
        if(counter ==inNum)
            cout<<"The largest number is: "<< max_val<<" The smallest number is: "<<min_val<<endl;
          
        
    }
    
   
    
}

int main()
{
    int i;
    bigLittle(i);
    
    return 0;
}
