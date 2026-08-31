#include <iostream>
using namespace std;

int main() {

    int friendship = 50;
    int trust = 50;

    int choice;

    cout << "Your friend asks you for help." << endl;
    cout << endl;

    cout << "1. Help your friend" << endl;
    cout << "2. Ignore your friend" << endl;

    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        friendship += 10;
        trust += 15;

        cout << endl;
        cout << "Your friendship became stronger." << endl;
    }
    else if (choice == 2) {
        friendship -= 10;
        trust -= 15;

        cout << endl;
        cout << "Your friend trusts you less." << endl;
    }

    cout << endl;
    cout << "Friendship: " << friendship << endl;
    cout << "Trust: " << trust << endl;

    return 0;
}
