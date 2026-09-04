#include <iostream>
using namespace std;

int main() {

    int wisdom = 50;
    int confidence = 50;
    int money = 50;

    int choice;

    cout << "You have an important decision to make." << endl;
    cout << endl;

    cout << "1. Continue studying" << endl;
    cout << "2. Start working" << endl;

    cout << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {

        wisdom += 20;
        confidence += 5;

        cout << endl;
        cout << "You continued your education." << endl;
        cout << "Wisdom increased!" << endl;
    }

    else if (choice == 2) {

        money += 20;
        confidence += 10;

        cout << endl;
        cout << "You started working." << endl;
        cout << "Money and confidence increased!" << endl;
    }

    else {
        cout << "Invalid choice." << endl;
    }

    cout << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Money: " << money << endl;
    cout << "Confidence: " << confidence << endl;

    return 0;
}
