#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void showStats(
    int happiness,
    int money,
    int wisdom,
    int confidence,
    int kindness,
    int ambition,
    int friendship,
    int familyBond
) {

    cout << endl;
    cout << "----------- LIFE STATS -----------" << endl;

    cout << "Happiness:    " << happiness << endl;
    cout << "Money:        " << money << endl;
    cout << "Wisdom:       " << wisdom << endl;
    cout << "Confidence:   " << confidence << endl;
    cout << "Kindness:     " << kindness << endl;
    cout << "Ambition:     " << ambition << endl;
    cout << "Friendship:   " << friendship << endl;
    cout << "Family Bond:  " << familyBond << endl;
}

int main() {

    srand(time(0));

    string name;
    int age;

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    int kindness = 0;
    int ambition = 0;

    int friendship = 50;
    int familyBond = 50;

    int choice;

    cout << "====================================" << endl;
    cout << "             LIFE SWITCH" << endl;
    cout << "====================================" << endl;

    cout << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your starting age: ";
    cin >> age;

    cout << endl;
    cout << "Welcome, " << name << "!" << endl;

    for (int round = 1; round <= 10; round++) {

        age++;

        cout << endl;
        cout << "====================================" << endl;
        cout << "AGE: " << age << endl;
        cout << "====================================" << endl;

        int event = rand() % 5;

        if (event == 0) {

            cout << endl;
            cout << "Your friend needs your help." << endl;

            cout << "1. Help your friend" << endl;
            cout << "2. Ignore them" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {

                kindness += 10;
                happiness += 10;
                confidence += 5;
                friendship += 10;

                cout << "Your friendship became stronger." << endl;
            }
            else if (choice == 2) {

                happiness -= 5;
                friendship -= 10;

                cout << "Your friend trusts you less." << endl;
            }
        }

        else if (event == 1) {

            cout << endl;
            cout << "You found money on the road." << endl;

            cout << "1. Find the owner" << endl;
            cout << "2. Keep the money" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {

                wisdom += 10;
                kindness += 5;
                happiness += 5;
                confidence += 5;

                cout << "You returned the money." << endl;
            }
            else if (choice == 2) {

                money += 20;
                wisdom -= 10;

                cout << "You kept the money." << endl;
            }
        }

        else if (event == 2) {

            cout << endl;
            cout << "You have an important exam tomorrow." << endl;

            cout << "1. Study" << endl;
            cout << "2. Go out with friends" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {

                wisdom += 10;
                ambition += 5;
                confidence += 5;

                cout << "You studied hard." << endl;
            }
            else if (choice == 2) {

                happiness += 10;
                wisdom -= 5;
                friendship += 5;

                cout << "You spent time with your friends." << endl;
            }
        }

        else if (event == 3) {

            cout << endl;
            cout << "Your family needs your help." << endl;

            cout << "1. Help your family" << endl;
            cout << "2. Focus only on yourself" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {

                kindness += 10;
                happiness += 5;
                familyBond += 15;

                cout << "Your family bond became stronger." << endl;
            }
            else if (choice == 2) {

                ambition += 5;
                familyBond -= 10;

                cout << "Your family felt ignored." << endl;
            }
        }

        else {

            cout << endl;
            cout << "You have an opportunity to learn a new skill." << endl;

            cout << "1. Learn the skill" << endl;
            cout << "2. Ignore the opportunity" << endl;

            cout << "Choice: ";
            cin >> choice;

            if (choice == 1) {

                wisdom += 10;
                ambition += 10;
                confidence += 5;

                cout << "You learned something new!" << endl;
            }
            else if (choice == 2) {

                happiness += 2;

                cout << "You decided to relax." << endl;
            }
        }

        showStats(
            happiness,
            money,
            wisdom,
            confidence,
            kindness,
            ambition,
            friendship,
            familyBond
        );
    }

    cout << endl;
    cout << "====================================" << endl;
    cout << "          YOUR LIFE RESULT" << endl;
    cout << "====================================" << endl;

    cout << endl;
    cout << "Player: " << name << endl;
    cout << "Final Age: " << age << endl;

    if (friendship >= 80) {
        cout << "Friendship: Best Friends" << endl;
    }
    else if (friendship >= 60) {
        cout << "Friendship: Close Friends" << endl;
    }
    else if (friendship >= 40) {
        cout << "Friendship: Friends" << endl;
    }
    else {
        cout << "Friendship: Distant" << endl;
    }

    if (familyBond >= 80) {
        cout << "Family: Very Strong Bond" << endl;
    }
    else if (familyBond >= 60) {
        cout << "Family: Strong Bond" << endl;
    }
    else if (familyBond >= 40) {
        cout << "Family: Normal Bond" << endl;
    }
    else {
        cout << "Family: Weak Bond" << endl;
    }

    int lifeScore =
        happiness +
        money +
        wisdom +
        confidence +
        kindness +
        ambition +
        friendship +
        familyBond;

    cout << endl;
    cout << "Final Life Score: " << lifeScore << endl;

    if (lifeScore >= 400) {
        cout << "You created an extraordinary life!" << endl;
    }
    else if (lifeScore >= 320) {
        cout << "You created a successful life!" << endl;
    }
    else {
        cout << "Your life had many challenges." << endl;
    }

    cout << endl;
    cout << "Every choice shaped your story." << endl;
    cout << "Thank you for playing, " << name << "!" << endl;

    return 0;
}
