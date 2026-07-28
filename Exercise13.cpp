// Title:	Array Sum
// Description: Write a program that calculates the sum of all elements in an array. Initialize the array with some predefined values.

#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    size_t length = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;
    return 0;
}