// Title: Factorial
// Description: Write a program that calculates the factorial of a given number.
// The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    int factorial = 1;

    for (int i = num; i > 0; i--)
    {
        factorial *= i;
    }

    cout << "The factorial of " << num << " is " << factorial << endl;

    return 0;
}
