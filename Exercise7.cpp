// Title: Reverse a String
// Description: 	Write a program that asks the user to enter a string and then prints the reverse of that string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string to reverse it: ";
    getline(cin, str);

    for (int i = 0; i < str.length() / 2; i++)
    {
        char temp1 = str[str.length() - i - 1];
        char temp2 = str[i];
        str[i] = temp1;
        str[str.length() - i - 1] = temp2;
    }

    cout << str << endl;

    return 0;
}