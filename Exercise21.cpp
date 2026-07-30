// Title: Prime Numbers in a Range
// Description: Write a program that asks the user to enter a range (start and end values) and prints all prime numbers within that range.

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int start, end;

    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    int range = end - start;

    if (range <= 0)
    {
        cout << "Invalid range.";
        return 0;
    }

    cout << "Prime numbers between " << start << " and " << end << ":" << endl;
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}