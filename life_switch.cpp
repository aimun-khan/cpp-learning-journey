#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    cout << "====================================" << endl;
    cout << "           LIFE SWITCH" << endl;
    cout << "====================================" << endl;

    cout << endl;
    cout << "Your life begins with 50 points in every category." << endl;

    for (int round = 1; round <= 5; round++) {

        cout << endl;
        cout << "========== ROUND " << round << " ==========" << endl;

        int event = rand() % 3 + 1;

        int choice;

        if (event == 1) {

            cout << endl;
            cout << "You found a wallet on the road." << endl;

            cout << "1. Return it" << endl;
            cout << "2. Keep the money" << endl;

            cout << "Your choice: ";
            cin >> choice;

            if (choice == 1) {
                wisdom += 10;
                happiness += 10;
                confidence += 5;

                cout << "You returned the wallet." << endl;
            }
            else if (choice == 2) {
                money += 20;
                wisdom -= 10;

                cout << "You kept the money." << endl;
            }
        }

        else if (event == 2) {

            cout << endl;
            cout << "Your friend really needs your help." << endl;

            cout << "1. Help your friend" << endl;
            cout << "2. Ignore them" << endl;

            cout << "Your choice: ";
            cin >> choice;

            if (choice == 1) {
                happiness += 10;
                confidence += 5;

                cout << "You helped your friend." << endl;
            }
            else if (choice == 2) {
                happiness -= 5;

                cout << "You decided not to help." << endl;
            }
        }

        else {

            cout << endl;
            cout << "You have an important exam tomorrow." << endl;

            cout << "1. Study" << endl;
            cout << "2. Go out with friends" << endl;

            cout << "Your choice: ";
            cin >> choice;

            if (choice == 1) {
                wisdom += 10;
                confidence += 5;

                cout << "You studied hard." << endl;
            }
            else if (choice == 2) {
                happiness += 10;
                wisdom -= 5;

                cout << "You had fun with your friends." << endl;
            }
        }

        cout << endl;
        cout << "Current stats:" << endl;

        cout << "Happiness: " << happiness << endl;
        cout << "Money: " << money << endl;
        cout << "Wisdom: " << wisdom << endl;
        cout << "Confidence: " << confidence << endl;
    }

    int lifeScore = happiness + money + wisdom + confidence;

    cout << endl;
    cout << "====================================" << endl;
    cout << "             LIFE RESULT" << endl;
    cout << "====================================" << endl;

    cout << "Final Life Score: " << lifeScore << endl;

    if (lifeScore >= 250) {
        cout << "You created an amazing life!" << endl;
    }
    else if (lifeScore >= 200) {
        cout << "You created a balanced life!" << endl;
    }
    else {
        cout << "Your choices made life challenging." << endl;
    }

    cout << endl;
    cout << "Every choice changed your story." << endl;

    return 0;
}
