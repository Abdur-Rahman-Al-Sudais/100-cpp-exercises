// Title: Count Vowels and Consonants
// Description: Write a program that asks the user to enter a string and counts the number of vowels and consonants in the string.
// Ignore spaces and consider uppercase and lowercase letters as the same.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string vowels = "aeiou";

    string str;

    cout << "Enter any string: ";

    getline(cin, str);

    size_t vowelsLength = vowels.length();
    size_t strLength = str.length();

    int vowelsNumber = 0;
    int consonantsNumber = 0;

    for (size_t i = 0; i < strLength; i++)
    {
        char c = tolower(str[i]);

        if (!isalpha(static_cast<unsigned char>(c)))
        {
            continue;
        }

        if (vowels.find(c) != string::npos)
        {
            vowelsNumber++;
        }
        else
        {
            consonantsNumber++;
        }
    }

    cout << "Consonants: " << consonantsNumber << endl;
    cout << "Vowels: " << vowelsNumber << endl;

    return 0;
}