// Title: Array Average
// Description: Write a program that calculates the average of all elements in an array. Initialize the array with some predefined values.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {30, 30, 40};

    size_t length = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    float average = static_cast<float>(sum) / length;

    cout << "Average: " << average << endl;
    return 0;
}