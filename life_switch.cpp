#include <iostream>
using namespace std;

int main() {

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    cout << "==============================" << endl;
    cout << "       LIFE SWITCH" << endl;
    cout << "==============================" << endl;

    cout << endl;
    cout << "Welcome to Life Switch!" << endl;
    cout << "Every choice you make will change your life." << endl;

    cout << endl;
    cout << "Your starting stats:" << endl;

    cout << "Happiness: " << happiness << endl;
    cout << "Money: " << money << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Confidence: " << confidence << endl;

    cout << endl;
    cout << "Your first decision..." << endl;

    cout << endl;
    cout << "You have an important exam tomorrow." << endl;
    cout << "What do you do?" << endl;

    cout << endl;
    cout << "1. Study" << endl;
    cout << "2. Go out with friends" << endl;

    int choice;
    cout << endl;
    cout << "Choose 1 or 2: ";
    cin >> choice;

    if (choice == 1) {
        wisdom += 10;
        confidence += 5;

        cout << endl;
        cout << "You studied hard!" << endl;
    }
    else if (choice == 2) {
        happiness += 10;
        confidence += 5;

        cout << endl;
        cout << "You had a great time with your friends!" << endl;
    }
    else {
        cout << endl;
        cout << "Invalid choice!" << endl;
    }

    cout << endl;
    cout << "Updated life stats:" << endl;

    cout << "Happiness: " << happiness << endl;
    cout << "Money: " << money << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Confidence: " << confidence << endl;

    return 0;
}
