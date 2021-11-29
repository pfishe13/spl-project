def isPalindrome(userInp):
    for i in range(0, int(len(userInp)/2)):
        if userInp[i] != userInp[len(userInp)-1-i]:
            return False
    return True

userInput = input("Enter a word to check if it is a palindrome: ")

flag = isPalindrome(userInput);

if flag:
    print(userInput + " is a palindrome")
else:
    print(userInput + " is not a palindrome")
