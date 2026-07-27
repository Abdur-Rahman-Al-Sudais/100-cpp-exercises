// Title: Prime Number
// Description: Write a program that asks the user to enter a number and then determines whether the number is prime or not.
// A prime number is a positive integer greater than 1 that has no positive divisors other than 1 and itself.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
    }

    if (num <= 1)
    {
        cout << "The number is neither PRIME nor COMPOSITE." << endl;
    }
    else if (isPrime)
    {
        cout << "The number you entered is PRIME." << endl;
    }
    else
    {
        cout << "The number you entered is COMPOSITE." << endl;
    }

    return 0;
}
