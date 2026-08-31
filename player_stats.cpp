#include <iostream>
#include <string>
using namespace std;

void showStats(
    int happiness,
    int money,
    int wisdom,
    int confidence
) {
    cout << endl;
    cout << "--------- YOUR STATS ---------" << endl;

    cout << "Happiness:  " << happiness << endl;
    cout << "Money:      " << money << endl;
    cout << "Wisdom:     " << wisdom << endl;
    cout << "Confidence: " << confidence << endl;
}

int main() {

    string name;

    int happiness = 50;
    int money = 50;
    int wisdom = 50;
    int confidence = 50;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << endl;
    cout << "Welcome, " << name << "!" << endl;

    showStats(
        happiness,
        money,
        wisdom,
        confidence
    );

    return 0;
}
