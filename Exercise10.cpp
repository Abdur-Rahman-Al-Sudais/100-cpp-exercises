// Title: Game	Number Guessing
// Description: Write a program that generates a random number between 1 and 100 and asks the user to guess the number.
// Provide feedback to the user (e.g., "Too high" or "Too low") until they guess the correct number.

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    int num;

    // Generate random number
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;

    while (true)
    {
        cout << "Guess a number from 1 to 100(Including 1 and 100): ";
        cin >> num;
        if (num == randomNumber)
        {
            cout << "Your guess is CORRECT! The number is " << randomNumber << endl;
            break;
        }
        else if (num > randomNumber)
        {
            if (num - 6 > randomNumber)
            {
                cout << "Too high" << endl;
            }
            else
            {
                cout << "You are close" << endl;
            }
        }
        else
        {
            if (num + 6 < randomNumber)
            {
                cout << "Too low" << endl;
            }
            else
            {
                cout << "You are close" << endl;
            }
        }
    }

    return 0;
}