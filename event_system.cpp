#include <iostream>
#include <string>
using namespace std;

// An Event stores information about one situation
struct Event {
    string title;
    string option1;
    string option2;
};

int main() {

    Event event1;

    event1.title = "You find a mysterious old box.";
    event1.option1 = "Open the box";
    event1.option2 = "Leave it alone";

    cout << "=================================" << endl;
    cout << "          LIFE SWITCH" << endl;
    cout << "=================================" << endl;
    cout << endl;

    cout << event1.title << endl;
    cout << endl;

    cout << "1. " << event1.option1 << endl;
    cout << "2. " << event1.option2 << endl;

    int choice;

    cout << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << endl;
        cout << "You opened the box and discovered something interesting!" << endl;
    }
    else if (choice == 2) {
        cout << endl;
        cout << "You decided to leave the mystery behind." << endl;
    }
    else {
        cout << endl;
        cout << "Invalid choice." << endl;
    }

    return 0;
}
