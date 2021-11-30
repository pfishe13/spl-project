#include <iostream>

using namespace std;

bool isPalindrome(string inp){
    for( int i = 0; i < inp.size()/2; ++i ){
        if ( inp[i] != inp[inp.size()-1-i] ) {
            return false;
        }
    }
    return true;
}

int main()
{
    string userInput;
    cout << "Enter a word to check if it is a palindrome: ";
    cin >> userInput;
    
    bool flag;
    flag = isPalindrome(userInput);
    
    if (flag) {
        cout << userInput << " is a palindrome" << endl;
    } else {
        cout << userInput << " is not a palindrome" << endl;
    }
    
    return 0;
}
