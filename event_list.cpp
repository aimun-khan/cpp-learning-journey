#include <iostream>
#include <string>
using namespace std;

struct Event {
    string title;
    string option1;
    string option2;
};

int main() {

    Event events[4] = {

        {
            "You discover an abandoned garden.",
            "Explore it",
            "Walk away"
        },

        {
            "You receive a mysterious letter.",
            "Read it",
            "Ignore it"
        },

        {
            "You find an opportunity to travel.",
            "Take the journey",
            "Stay home"
        },

        {
            "You meet someone who shares your interests.",
            "Start a conversation",
            "Keep walking"
        }
    };

    cout << "=================================" << endl;
    cout << "        RANDOM LIFE EVENT" << endl;
    cout << "=================================" << endl;
    cout << endl;

    int eventNumber = 0;

    cout << events[eventNumber].title << endl;
    cout << endl;

    cout << "1. " << events[eventNumber].option1 << endl;
    cout << "2. " << events[eventNumber].option2 << endl;

    int choice;

    cout << endl;
    cout << "Choice: ";
    cin >> choice;

    cout << endl;

    if (choice == 1) {
        cout << "You chose: "
             << events[eventNumber].option1 << endl;
    }
    else if (choice == 2) {
        cout << "You chose: "
             << events[eventNumber].option2 << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
