#include <iostream>
using namespace std;

int main() {

    bool helpedFriend = false;
    int choice;

    cout << "Your friend needs help." << endl;
    cout << "1. Help your friend" << endl;
    cout << "2. Ignore your friend" << endl;

    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        helpedFriend = true;
        cout << "You helped your friend." << endl;
    }
    else if (choice == 2) {
        helpedFriend = false;
        cout << "You ignored your friend." << endl;
    }

    cout << endl;

    if (helpedFriend) {
        cout << "The game remembers that you helped your friend." << endl;
    }
    else {
        cout << "The game remembers that you did not help." << endl;
    }

    return 0;
}
