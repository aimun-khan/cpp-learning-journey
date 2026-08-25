#include <iostream>
using namespace std;

int main() {

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    int event;
    int choice;

    cout << "================================" << endl;
    cout << "       LIFE EVENT TEST" << endl;
    cout << "================================" << endl;

    cout << endl;

    cout << "Choose an event:" << endl;
    cout << "1. Found a wallet" << endl;
    cout << "2. Friend needs help" << endl;
    cout << "3. Important exam tomorrow" << endl;

    cout << endl;
    cout << "Event: ";
    cin >> event;

    if (event == 1) {

        cout << endl;
        cout << "You found a wallet." << endl;
        cout << "1. Return it" << endl;
        cout << "2. Keep it" << endl;

        cin >> choice;

        if (choice == 1) {
            wisdom += 10;
            happiness += 10;
        }
        else if (choice == 2) {
            money += 20;
            wisdom -= 10;
        }
    }

    else if (event == 2) {

        cout << endl;
        cout << "Your friend needs your help." << endl;
        cout << "1. Help your friend" << endl;
        cout << "2. Ignore them" << endl;

        cin >> choice;

        if (choice == 1) {
            happiness += 10;
            confidence += 5;
        }
        else if (choice == 2) {
            happiness -= 5;
        }
    }

    else if (event == 3) {

        cout << endl;
        cout << "You have an important exam tomorrow." << endl;
        cout << "1. Study" << endl;
        cout << "2. Go out with friends" << endl;

        cin >> choice;

        if (choice == 1) {
            wisdom += 10;
            confidence += 5;
        }
        else if (choice == 2) {
            happiness += 10;
            wisdom -= 5;
        }
    }

    else {
        cout << "Invalid event." << endl;
    }

    cout << endl;
    cout << "========== YOUR STATS ==========" << endl;

    cout << "Happiness: " << happiness << endl;
    cout << "Money: " << money << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Confidence: " << confidence << endl;

    return 0;
}
