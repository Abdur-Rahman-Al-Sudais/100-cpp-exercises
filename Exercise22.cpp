// Title: Armstrong Number
// Description: Write a program that asks the user to enter a number and determines whether the number is an Armstrong number or not.
// An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string numStr;

    cout << "Enter a number: ";
    cin >> numStr;

    int numberOfDigits = numStr.length();
    int sum = 0;

    for (int i = 0; i < numberOfDigits; i++)
    {
        int d = numStr[i] - '0';
        sum += pow(d, numberOfDigits);
    }

    cout << "Sum: " << sum << endl;

    if (stoi(numStr) == sum)
        cout << "The number is an Armstrong number." << endl;
    else
        cout << "The number is NOT an Armstrong number." << endl;

    return 0;
}