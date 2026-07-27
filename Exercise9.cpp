// Title:	Multiplication Table
// Description: Write a program that prints the multiplication table for numbers from 1 to 10.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Multiplication Table for " << i << endl;
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << '.' << endl;
        }
    }

    return 0;
}