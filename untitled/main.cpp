#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num, guess, tries = 0;
    srand(time(0)); // RNG
    num = rand() % 10 + 1; // random number between 1 and 10, selected by the computer

    do
    {
        cout << "\nEnter a number between 1-10: ";
        cin >> guess;
        tries++;

        if (guess > num)
            cout << "\nYour number is too high! "; // displayed if number guessed is too high
        else if (guess < num)
            cout << "\nYour number is too low! "; // displayed if number guessed is too low
        else
            cout << "\nCorrect! You got the answer in " << tries << " guesses!"; //if number guessed is correct, game over with message
    } while (guess != num && tries<5); //limit tried to a maximum of 5
        cout << "\nGame Over! Would you like to try again? "; //displayed when maximum guesses have been made or game is over

    return 0;
}