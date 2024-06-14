#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));  

    int numberToGuess = rand() % 100 + 1;  
    int attempts = 0;
    const int maxAttempts = 10;
    int guess;
    bool guessed = false;

    cout << " the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "You have " << maxAttempts << " attempts to guess it." << endl;

    while (attempts < maxAttempts && !guessed) {
        cout << "Attempt " << (attempts + 1) << ": Enter  guess: ";
        cin >> guess;
        attempts++;

        if (guess == numberToGuess) {
            guessed = true;
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high! ";
        } else {
            cout << "Too low! ";
        }

        
        if (abs(guess - numberToGuess) <= 10 && guess != numberToGuess) {
            cout << "But you are very close!" << endl;
        } else if (abs(guess - numberToGuess) <= 20 && guess != numberToGuess) {
            cout << "You are somewhat close." << endl;
        } else {
            cout << "You are far off." << endl;
        }
    }

    if (!guessed) {
        cout << "Sorry, you've used all your attempts. The number was " << numberToGuess << "." << endl;
    }

    return 0;
}
