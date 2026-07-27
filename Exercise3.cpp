// Title: Even or Odd
// Description: Write a program that asks the user to enter a number and then determines whether the number is even or odd.
// Print an appropriate message to the console.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number you entered is EVEN.";
    }
    else
    {
        cout << "The number you entered is ODD.";
    }

    return 0;
}
