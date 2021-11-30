def isPalindrome(userInp):                                                  // return type does not need to be specified in python. parameter does not need type either
    for i in range(0, int(len(userInp)/2)):                                 // iterate i from 0 to half of the size of the inp string
        if userInp[i] != userInp[len(userInp)-1-i]:                         // if characters do not match, return false
            return False
    return True                                                             // all characters match, inp is a palindrome, return true

userInput = input("Enter a word to check if it is a palindrome: ")          // type is not specified when userInput is declared. userInput is declared, the string is outputted to the console and the user input is assigned to userInput all in one line

flag = isPalindrome(userInput);                                             // type is not specified when flag is declared. flag is set to the return value of isPalindrome

if flag:                                                                    // if flag is true
    print(userInput + " is a palindrome")
else:                                                                       // if flag is false
    print(userInput + " is not a palindrome")
