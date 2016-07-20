//
//  main.cpp
//  writeFile
//
//  Created by Alexander Laquitara on 6/11/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
    ofstream outputFile;
    ifstream inputFile;
    double number, sum;
    
    //cout<< "how many numbers do you wish to write to the file?" << endl;
    //cin>> number;
    
    inputFile.open("nums.txt");
    
    if(inputFile.is_open())
    {
       
        while (inputFile >> number)
        {
            sum += number;
        }
        inputFile.close();
        
    }
    
    else;
    {
        cout<<"Could not open the inputfile!" <<endl;
    }
    
    outputFile.open("sums.txt");
    
    if (outputFile.is_open())
    {
        outputFile << "the sum of numbers from nums.txt is: "<< sum << endl;
        outputFile.close();
    }
    else
    {
        cout<< "could not open the output file."<< endl;
    }
    
    
    

    return 0;
}
