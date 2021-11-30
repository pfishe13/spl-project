#include <iostream>                                                 // mandatory file for input/output

using namespace std;                                                // for standard namespace

bool isPalindrome(string inp){                                      // return type has to be explicitly specified, parameter type also has to be specified
    for( int i = 0; i < inp.size()/2; ++i ){                        // iterate i from 0 to half of the size of the inp string
        if ( inp[i] != inp[inp.size()-1-i] ) {                      // if characters do not match, return false
            return false;
        }
    }
    return true;                                                    // all characters match, inp is a palindrome, return true
}

int main()                                                          // required main function that all c++ programs need
{
    string userInput;                                               // data type 'string' required in c++
    cout << "Enter a word to check if it is a palindrome: ";        // output string to console
    cin >> userInput;                                               // get user input from console and store in userInput
    
    bool flag = isPalindrome(userInput);                            // data type 'bool' required, store result of function return value in flag (true if userInput is a palindrome, false otherwise)
    
    if (flag) {                                                     // if flag is true
        cout << userInput << " is a palindrome" << endl;
    } else {                                                        // if flag is false
        cout << userInput << " is not a palindrome" << endl;
    }
    
    return 0;                                                       // return 0 to end main function
}
