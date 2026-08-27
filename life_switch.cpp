#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showStats(int happiness, int money, int wisdom,
               int confidence, int kindness, int ambition) {

    cout << endl;
    cout << "----------- LIFE STATS -----------" << endl;

    cout << "Happiness:  " << happiness << endl;
    cout << "Money:      " << money << endl;
    cout << "Wisdom:     " << wisdom << endl;
    cout << "Confidence: " << confidence << endl;
    cout << "Kindness:   " << kindness << endl;
    cout << "Ambition:   " << ambition << endl;
}

int main() {

    srand(time(0));

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    int kindness = 0;
    int ambition = 0;

    int age = 12;
    int choice;

    cout << "====================================" << endl;
    cout << "             LIFE SWITCH" << endl;
    cout << "====================================" << endl;

    cout << endl;
    cout << "Your decisions will shape your personality." << endl;

    for (int round = 1; round <= 5; round++) {

        age++;

        cout << endl;
        cout << "====================================" << endl;
        cout << "AGE: " << age << endl;
        cout << "====================================" << endl;

        int event = rand() % 3 + 1;

        if (event == 1) {

            cout << endl;
            cout << "Your friend needs your help." << endl;

            cout << "1. Help your friend" << endl;
            cout << "2. Ignore them" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {

                happiness += 10;
                confidence += 5;
                kindness += 10;

                cout << "You helped your friend." << endl;
            }
            else if (choice == 2) {

                happiness -= 5;
                ambition += 5;

                cout << "You focused on yourself." << endl;
            }
        }

        else if (event == 2) {

            cout << endl;
            cout << "You found money on the ground." << endl;

            cout << "1. Find the owner" << endl;
            cout << "2. Keep the money" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {

                wisdom += 10;
                happiness += 5;
                kindness += 5;

                cout << "You returned the money." << endl;
            }
            else if (choice == 2) {

                money += 20;
                wisdom -= 10;

                cout << "You kept the money." << endl;
            }
        }

        else {

            cout << endl;
            cout << "You have an important exam tomorrow." << endl;

            cout << "1. Study" << endl;
            cout << "2. Go out with friends" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {

                wisdom += 10;
                confidence += 5;
                ambition += 5;

                cout << "You studied hard." << endl;
            }
            else if (choice == 2) {

                happiness += 10;
                wisdom -= 5;

                cout << "You went out with friends." << endl;
            }
        }

        showStats(
            happiness,
            money,
            wisdom,
            confidence,
            kindness,
            ambition
        );
    }

    cout << endl;
    cout << "====================================" << endl;
    cout << "          YOUR PERSONALITY" << endl;
    cout << "====================================" << endl;

    if (kindness > ambition) {
        cout << "You are becoming a kind person." << endl;
    }
    else if (ambition > kindness) {
        cout << "You are becoming an ambitious person." << endl;
    }
    else {
        cout << "You have a balanced personality." << endl;
    }

    int lifeScore =
        happiness +
        money +
        wisdom +
        confidence +
        kindness +
        ambition;

    cout << endl;
    cout << "Final Life Score: " << lifeScore << endl;

    return 0;
}
