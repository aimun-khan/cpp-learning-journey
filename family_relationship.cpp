#include <iostream>
using namespace std;

int main() {

    int familyBond = 50;
    int choice;

    cout << "Your family needs your help." << endl;
    cout << endl;

    cout << "1. Help your family" << endl;
    cout << "2. Ignore them" << endl;

    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        familyBond += 15;

        cout << endl;
        cout << "Your family bond became stronger." << endl;
    }
    else if (choice == 2) {
        familyBond -= 10;

        cout << endl;
        cout << "Your family bond became weaker." << endl;
    }

    cout << endl;
    cout << "Family Bond: " << familyBond << endl;

    return 0;
}
