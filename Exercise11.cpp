// Title: Leap Year
// Description: Write a program that asks the user to enter a year and determines whether the year is a leap year or not.
// A leap year is divisible by 4 but not divisible by 100, except if it is also divisible by 400.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << year << " is a Leap year." << endl;
    }
    else
    {
        cout << year << " is not a Leap year." << endl;
    }

    return 0;
}