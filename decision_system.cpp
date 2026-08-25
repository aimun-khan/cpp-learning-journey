#include <iostream>
using namespace std;

int main() {

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    int choice;

    cout << "You found a wallet on the road." << endl;
    cout << endl;

    cout << "1. Return the wallet" << endl;
    cout << "2. Keep the money" << endl;

    cout << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1) {
        wisdom += 10;
        confidence += 5;
        happiness += 5;

        cout << endl;
        cout << "You returned the wallet." << endl;
        cout << "You feel good about your decision!" << endl;
    }
    else if (choice == 2) {
        money += 20;
        wisdom -= 10;

        cout << endl;
        cout << "You kept the money." << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }

    cout << endl;
    cout << "Happiness: " << happiness << endl;
    cout << "Money: " << money << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Confidence: " << confidence << endl;

    return 0;
}
