#include <iostream>
using namespace std;

int main() {

    int ambition;
    int confidence;

    cout << "Enter your ambition (0-100): ";
    cin >> ambition;

    cout << "Enter your confidence (0-100): ";
    cin >> confidence;

    cout << endl;

    if (ambition >= 70 && confidence >= 70) {

        cout << "SPECIAL PATH UNLOCKED!" << endl;
        cout << "You decided to become a leader." << endl;

    }
    else if (ambition >= 70) {

        cout << "You have strong ambition." << endl;
        cout << "You decide to work toward a major goal." << endl;

    }
    else if (confidence >= 70) {

        cout << "You have strong confidence." << endl;
        cout << "You decide to take a bold opportunity." << endl;

    }
    else {

        cout << "You choose a quieter path." << endl;
        cout << "Your journey is still developing." << endl;
    }

    return 0;
}
