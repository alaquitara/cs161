#include <stdio.h>
#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <vector>


using namespace std;

vector<int> findMode(int numbers[], int size)
{
    int mode_occurrences = 0;
    int temp_occurrences = 0;
    vector <int> mode;

    sort(numbers, numbers + size); //sorts the integers from the numbers array in acending order

    for (int i = 0; i < size; i++)
    {
        // Reset counter for outer loop
        mode_occurrences = 0;

                for (int j = i + 1; j < size; j++)  // checks the frequency of sorted numbers because they have already been sorted
        {

            if (numbers[j] == numbers[i])
            {
                mode_occurrences++;
            }


            if (mode_occurrences >= temp_occurrences && mode_occurrences > 0)// Overwrite the modes vector with the current value
            {

                mode.push_back(numbers[i]);
                temp_occurrences = mode_occurrences;
                mode_occurrences = 0;
                cout<< numbers[i]<< endl;
            }
        }
    }


    if (mode_occurrences == 0 && temp_occurrences == 0) //if there are no consecutive numbers the mode is all the numbers
    {
        for (int i = 0; i < size; i++)
        {

            mode.push_back(numbers[i]);
            cout<< numbers[i]<< endl;
        }
    }
    sort(mode.begin(), mode.end()); //sorts the vector
    //cout<< mode<< endl;
    return mode;
}


i/*nt main(){
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

} */
