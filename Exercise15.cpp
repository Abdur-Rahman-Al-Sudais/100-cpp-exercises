// Title: Array Sorting
// Description: Write a program that sorts the elements of an array in ascending order.
// You can use any sorting algorithm of your choice (e.g., bubble sort, selection sort, insertion sort).

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {6,1,82,21,22,13,893,2000};

    size_t length = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + length);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}