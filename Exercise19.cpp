// Title: Power of a Number
// Description: Write a program that asks the user to enter a base number and an exponent, and then calculates the result of raising the base number to the exponent.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double base;
    double exponent;

    cout << "Enter a base number: ";
    cin >> base;

    cout << "Enter an exponent: ";
    cin >> exponent;

    double result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}