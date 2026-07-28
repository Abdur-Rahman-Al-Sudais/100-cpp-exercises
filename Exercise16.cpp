// Title:	String Length
// Description:Write a program that asks the user to enter a string and calculates the length of the string (the number of characters in the string).

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter any string: ";

    getline(cin, str);

    size_t length = str.length();

    cout << "Length: " << length << endl;

    return 0;
}