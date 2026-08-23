#include <iostream>
#include <string>
using namespace std;

int main() {

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    string choices[4] = {
        "Study for your exam",
        "Go out with friends",
        "Help your family",
        "Play games all night"
    };

    cout << "================================" << endl;
    cout << "          LIFE SWITCH" << endl;
    cout << "================================" << endl;

    cout << endl;
    cout << "Your life starts with 50 points." << endl;

    cout << endl;
    cout << "Your first situation:" << endl;
    cout << "You have an important exam tomorrow." << endl;

    cout << endl;

    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << choices[i] << endl;
    }

    int choice;

    cout << endl;
    cout << "What will you choose? ";
    cin >> choice;

    if (choice == 1) {
        wisdom += 10;
        confidence += 5;
        happiness -= 5;
    }
    else if (choice == 2) {
        happiness += 10;
        confidence += 5;
    }
    else if (choice == 3) {
        happiness += 5;
        confidence += 10;
    }
    else if (choice == 4) {
        happiness += 5;
        wisdom -= 10;
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    cout << endl;
    cout << "================================" << endl;
    cout << "       YOUR LIFE STATS" << endl;
    cout << "================================" << endl;

    cout << "Happiness:  " << happiness << endl;
    cout << "Money:      " << money << endl;
    cout << "Wisdom:     " << wisdom << endl;
    cout << "Confidence: " << confidence << endl;

    cout << endl;
    cout << "Your choice has changed your life!" << endl;

    return 0;
}
