#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "=================================" << endl;
    cout << "          LIFE SWITCH" << endl;
    cout << "=================================" << endl;
    cout << endl;

    cout << "1. New Game" << endl;
    cout << "2. Continue Game" << endl;
    cout << "3. View Instructions" << endl;
    cout << "4. Exit" << endl;
    cout << endl;

    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) {
        cout << endl;
        cout << "Starting a new life..." << endl;
    }
    else if (choice == 2) {
        cout << endl;
        cout << "Loading your previous life..." << endl;
    }
    else if (choice == 3) {
        cout << endl;
        cout << "Make choices carefully." << endl;
        cout << "Every decision can change your future." << endl;
    }
    else if (choice == 4) {
        cout << endl;
        cout << "Goodbye!" << endl;
    }
    else {
        cout << endl;
        cout << "Invalid choice." << endl;
    }

    return 0;
}
