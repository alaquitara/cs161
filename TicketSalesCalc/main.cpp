//
//  main.cpp
//  TicketSalesCalc
//
//  Created by Alexander Laquitara on 4/8/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//


#include <iostream>
using namespace std;

int main(){
    
    int answer, guess, count;
    count = 0;
    
    /*cout << "Enter the number for the player to guess." << endl;
     cin>> answer;
     
     cout<< "Enter your guess." <<endl;
     cin>> guess;
     
     count= 0;
     while (count<5){
     
     if ( guess > answer ){
     cout <<"higher"<< endl;
     }
     else if ( guess < answer) {
     cout << "lower" << endl;
     }
     else if (guess == answer){
     cout<< "You guessed it in " << count << " tries." << endl;
     break;
     }
     count++;
     }
     return 0;*/
    
    cout << "Enter the number for the player to guess." << endl;
    cin>> answer;
    
    do
    {
        cout<< "Enter your guess." <<endl;
        cin>> guess;
        count++;
        if ( guess > answer )
        cout <<"higher"<< endl;
        else if ( guess < answer)
        cout << "lower" << endl;
        else;
            cout<< "You guessed it in " << count << " tries." << endl;
        } while (count > 5);
        return 0;
    }