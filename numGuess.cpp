/*********************************************************************
** Author: Alexander Laquitara
** Date:4/13/2015
** Description:This is a guessing game for a player to guess a pre-determined number.
*********************************************************************/

#include <iostream>  //Header file required for cout
using namespace std;  // Allows us to drop off the std:: prefix

int main(){  //initialization of the main program

    int answer, guess, count;  //creates int variables to be implemented further down
    count = 0;  // assigned the variable count to zero

    cout << "Enter the number for the player to guess." << endl; 
    cin>> answer;  //Prompts user to input a number to be guessed
    
    do //initiates the do-while loop
    {
        cout<< "Enter your guess." <<endl;  
        cin>> guess;  //allows the user to enter a guess
        count++;  // Keeps tabs on the amount of guesses tried and increases by 1 each attempt.
        if ( guess < answer )
            cout <<"higher"<< endl;  //if the guess is too low it will ask for a higher #
        else if ( guess > answer) 
            cout << "lower" << endl; //if the guess is too low it will ask for a lower #  
        else if (guess == answer)  // lets user know how many tries it took.
            cout<< "You guessed it in " << count << " tries." << endl;
    } 
    while (guess != answer); //ensures the loop continues when the answer is incorrect.
    return 0;
}