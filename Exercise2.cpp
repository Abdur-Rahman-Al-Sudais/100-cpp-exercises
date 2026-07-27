// Title: Sum of Two Numbers
// Description: Write a program that asks the user to enter two numbers, and then prints the sum of those two numbers.

#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Sum: " << num1 + num2 << endl;

    return 0;
}
