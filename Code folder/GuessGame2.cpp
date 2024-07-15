#include <iostream>
#include <cstdlib>
using namespace std;
// Number guessing game

int main() {
    int myNumber = rand() % 100 + 1;  // Generate random number between 1 and 100
    int userNumber = 0;
    int attempts = 0;

    do {
        cout << "Guess my number (1-100): ";
        cin >> userNumber;
        attempts++;
        
        if (userNumber == myNumber) {
            cout << "WOOHOO .. CORRECT NUMBER!!!" << endl;
            break;
        } else if (userNumber > myNumber) {
            cout << "Your number is too large" << endl;
        } else {
            cout << "Your number is too small" << endl;
        }
    } while (userNumber >= 0);

    cout << "My number was: " << myNumber << endl;
    cout << "You took " << attempts << " attempts to guess!" << endl;

    return 0;
}


