// Title: Fibonacci Sequence
// Description: Write a program that prints the Fibonacci sequence up to a given number.
// The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones.
// The sequence starts with 0 and 1.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of terms: ";
    cin >> num;

    int a = 0, b = 1;

    cout << "Fibonacci Sequence upto " << num << " number of terms." << endl;
    for (int i = 0; i < num; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;

    return 0;
}
