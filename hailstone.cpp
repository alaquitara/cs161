/*********************************************************************
** Author: Alexander Laquitara
** Date:4/19/2015
** Description:This is a function that counts the steps for a hailstone sequence
*********************************************************************/

//#include <iostream> // Header file used to input and print

//using namespace std; // Required in order to drop std :: prefix

int hailstone (int n) // Defines the function hailstone which returns the # of steps.
{

    int counter = 0; // Sets the counter variable to 0 in order to keep track of steps
    while (n !=1) // Obligatory while loop that ensures the program runs as long as n doesn't reach 0
    {
        if (n % 2 == 0) // Test to see if "n" is even
        { 
            n /= 2; // If Even "n" is divided by 2
         }   
        else 
        {
            n= n * 3 +1 ; // otherwise it is odd and is multiplied by 3 then 1 is added.
      }      
    counter = counter + 1; // Increases counter by 1 each time it loops
    }
    return counter; // returns the value for counter as the output to the function.
}
    

  
    

/*int main () {
    cout << hailstone( 3)<< endl;
    return 0;
} */
