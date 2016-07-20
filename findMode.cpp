//
//  findMode1.cpp
//  findMode.cpp
//
//  Created by Alexander Laquitara on 5/14/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Author: Alexander Laquitara
 ** Date: 5/17/15
 ** Description: A function that finds the modes of an array
 *********************************************************************/

#include <stdio.h>
#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <vector>


using namespace std;

vector<int> findMode(int numbers[], int size); //prototype for findMode Function


/*********************************************************************
 ** findMode
 ** Description: Finds the mode of an array of integers
 ** Parameters: An array of ints and an integer
 *********************************************************************/


vector<int> findMode(int numbers[], int size)
{
    int mode_occurrences = 0;
    int temp_occurrences = 0;
    vector <int> mode;

    sort(numbers, numbers + size); // sorts numbers array

    for (int i = 0; i < size; i++)
    {

        mode_occurrences = 0;

                for (int j = i + 1; j < size; j++)
        {

            if (numbers[j] == numbers[i]) //If the number occurs, increment the temporary occurrences
            {
                mode_occurrences++;
            }


            if (mode_occurrences >= temp_occurrences && mode_occurrences > 0)
            {

                mode.push_back(numbers[i]);
                temp_occurrences = mode_occurrences;
                mode_occurrences = 0;
            }
        }
    }


    if (mode_occurrences == 0 && temp_occurrences == 0)
    {
        for (int i = 0; i < size; i++)
        {

            mode.push_back(numbers[i]);
        }
    }
    sort(mode.begin(), mode.end()); // sorts mode vector
    return mode;
}


/*int main(){
    int size = 11;
    int numbers[11] = {12, 1, 7, 7, 4, 1, 19, 7, 6, 3, 1};
    //vector <int> z;
    /*cout<< "how many numbers?"<<endl;
    cin>> size;

    for (int i=0; i<=size; i++){

        cin>> numbers[i];

        findMode (numbers, size);
        cout<< "the mode(s) are: " << findMode;



    return 0;

}
*/
