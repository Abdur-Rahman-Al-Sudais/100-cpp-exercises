// Title: Sum of Digits
// Description: Write a program that asks the user to enter a positive integer and calculates the sum of its digits.

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    string numStr;

    cout << "Enter a positive integer: ";
    cin >> numStr;

    int sum = 0;
    for (size_t i = 0; i < numStr.length(); i++)
    {

        sum += numStr[i] - '0';
    }

    cout << sum << endl;

    return 0;
}