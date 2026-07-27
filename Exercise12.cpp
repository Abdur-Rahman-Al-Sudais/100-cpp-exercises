// Title: Temperature Conversion
// Description: Write a program that converts temperature from Celsius to Fahrenheit and vice versa.
// Ask the user to enter the temperature in one unit and provide the converted temperature in the other unit.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double temp;
    char tempUnit;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Enter temperature unit (C Celsius for and F for Fahrenheit): ";
    cin >> tempUnit;

    if (tempUnit != 'C' && tempUnit != 'F')
    {
        cout << "Invalid temperature unit.";
        return 0;
    }

    if (tempUnit == 'F')
    {
        cout << "Celsius: " << (temp - 32) * 5 / 9 << endl;
    }
    else
    {
        cout << "Fahrenheit: " << (temp * 9 / 5) + 32 << endl;
    }

    return 0;
}