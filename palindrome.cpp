#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool isPal (string test)
{
     if (test == string(test.rbegin(), test.rend())) {
    return true;
else {
    return false;
  } 
}
        
    
}

int main ()
{
    string word;
    cout << "Please enter a word without spaces \n";
    cin >> word;
    cout << "Your word is: " << word << endl;
    
    cout << isPal(word);
    
    return 0;
}