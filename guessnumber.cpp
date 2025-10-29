#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    cout << " Welcome to the Number Guessing Game!\n";
    do {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
            cout << "Too high! Try again.\n";
        else if (guess < number)
            cout << "Too low! Try again.\n";
        else
            cout << "\n You guessed it in " << attempts << " attempts!\n";
    } while (guess != number);

    return 0;
}

