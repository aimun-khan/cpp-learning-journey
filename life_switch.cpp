#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    string situations[5] = {
        "You found a wallet on the road.",
        "Your friend needs your help.",
        "You have an important exam tomorrow.",
        "You received some unexpected money.",
        "Someone criticized your work."
    };

    cout << "====================================" << endl;
    cout << "            LIFE SWITCH" << endl;
    cout << "====================================" << endl;

    cout << endl;
    cout << "Your life is about to begin..." << endl;

    for (int round = 1; round <= 5; round++) {

        cout << endl;
        cout << "----------- ROUND " << round << " -----------" << endl;

        int event = rand() % 5;

        cout << situations[event] << endl;

        cout << endl;

        cout << "1. Make the responsible choice" << endl;
        cout << "2. Choose yourself" << endl;

        int choice;

        cout << "Your choice: ";
        cin >> choice;

        if (choice == 1) {
            wisdom += 5;
            confidence += 5;
            happiness += 2;
        }
        else if (choice == 2) {
            happiness += 7;
            confidence += 3;
        }
        else {
            cout << "Invalid choice." << endl;
            round--;
            continue;
        }

        cout << endl;
        cout << "Your stats:" << endl;

        cout << "Happiness:  " << happiness << endl;
        cout << "Money:      " << money << endl;
        cout << "Wisdom:     " << wisdom << endl;
        cout << "Confidence: " << confidence << endl;
    }

    cout << endl;
    cout << "====================================" << endl;
    cout << "             LIFE RESULT" << endl;
    cout << "====================================" << endl;

    int lifeScore = happiness + money + wisdom + confidence;

    cout << "Your Life Score: " << lifeScore << endl;

    if (lifeScore >= 250) {
        cout << "You created an amazing life!" << endl;
    }
    else if (lifeScore >= 200) {
        cout << "You created a balanced life!" << endl;
    }
    else {
        cout << "Your life had some difficult choices." << endl;
    }

    cout << endl;
    cout << "Would you make different choices next time?" << endl;

    return 0;
}
