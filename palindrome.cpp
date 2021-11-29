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
    string input;
    cout << "Enter a word to check if it is a palindrome: ";
    cin >> input;
    
    bool flag;
    flag = isPalindrome(input);
    
    if (flag) {
        cout << input << " is a palindrome" << endl;
    } else {
        cout << input << " is not a palindrome" << endl;
    }
    
    return 0;
}
