#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showStats(int happiness, int money, int wisdom, int confidence) {

    cout << endl;
    cout << "--------- LIFE STATS ---------" << endl;

    cout << "Happiness:  " << happiness << endl;
    cout << "Money:      " << money << endl;
    cout << "Wisdom:     " << wisdom << endl;
    cout << "Confidence: " << confidence << endl;
}

void showAge(int age) {

    cout << endl;
    cout << "You are now " << age << " years old." << endl;

    if (age <= 12) {
        cout << "Life Stage: Childhood" << endl;
    }
    else if (age <= 18) {
        cout << "Life Stage: Teenage" << endl;
    }
    else if (age <= 30) {
        cout << "Life Stage: Young Adult" << endl;
    }
    else if (age <= 50) {
        cout << "Life Stage: Adult" << endl;
    }
    else {
        cout << "Life Stage: Later Life" << endl;
    }
}

int main() {

    srand(time(0));

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    int age = 12;
    int choice;

    cout << "====================================" << endl;
    cout << "             LIFE SWITCH" << endl;
    cout << "====================================" << endl;

    cout << endl;
    cout << "Your journey begins..." << endl;

    for (int round = 1; round <= 5; round++) {

        age += 1;

        showAge(age);

        cout << endl;

        int event = rand() % 3 + 1;

        if (event == 1) {

            cout << "Your friend wants you to skip studying." << endl;

            cout << "1. Study" << endl;
            cout << "2. Go with your friend" << endl;

            cout << "Choice: ";
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

        else if (event == 2) {

            cout << "You found some money on the ground." << endl;

            cout << "1. Look for the owner" << endl;
            cout << "2. Keep it" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                wisdom += 10;
                happiness += 5;
            }
            else if (choice == 2) {
                money += 20;
                wisdom -= 10;
            }
        }

        else {

            cout << "Someone asks you for help." << endl;

            cout << "1. Help them" << endl;
            cout << "2. Ignore them" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                happiness += 10;
                confidence += 5;
            }
            else if (choice == 2) {
                happiness -= 5;
            }
        }

        showStats(happiness, money, wisdom, confidence);
    }

    int lifeScore = happiness + money + wisdom + confidence;

    cout << endl;
    cout << "====================================" << endl;
    cout << "             LIFE RESULT" << endl;
    cout << "====================================" << endl;

    cout << "Final Age: " << age << endl;
    cout << "Life Score: " << lifeScore << endl;

    if (lifeScore >= 250) {
        cout << "You created an amazing life!" << endl;
    }
    else if (lifeScore >= 200) {
        cout << "You created a balanced life!" << endl;
    }
    else {
        cout << "Life was challenging, but every choice mattered." << endl;
    }

    return 0;
}
