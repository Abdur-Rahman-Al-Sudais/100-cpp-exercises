// Title: Palindrome Array
// Description: Write a program that asks the user to enter an array of integers and determines whether the array is a palindrome or not.
// An array is considered a palindrome if it reads the same forward and backward.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    bool isPalindrome = true;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " integers: " << endl;
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] != arr[size - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "Array is Palindrome.";
    }
    else
    {
        cout << "Array is not Palindrome.";
    }

    return 0;
}