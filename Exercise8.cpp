// Title: Palindrome
// Description: Write a program that asks the user to enter a string and then determines whether the string is a palindrome or not.
// A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, reversed = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }

    if (str == reversed)
    {
        cout << "The string you entered is a Palindrome." << endl;
    }
    else
    {
        cout << "The string you entered is NOT a Palindrome." << endl;
    }

    return 0;
}