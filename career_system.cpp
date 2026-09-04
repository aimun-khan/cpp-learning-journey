#include <iostream>
#include <string>
using namespace std;

int main() {

    int choice;

    cout << "================================" << endl;
    cout << "       CAREER DECISION" << endl;
    cout << "================================" << endl;

    cout << endl;
    cout << "You have finished your studies." << endl;
    cout << "What career path will you choose?" << endl;

    cout << endl;
    cout << "1. Technology" << endl;
    cout << "2. Business" << endl;
    cout << "3. Creative Career" << endl;
    cout << "4. Science" << endl;

    cout << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << endl;
        cout << "You chose Technology." << endl;
        cout << "Your career focuses on problem solving and innovation." << endl;
    }
    else if (choice == 2) {
        cout << endl;
        cout << "You chose Business." << endl;
        cout << "Your career focuses on money and leadership." << endl;
    }
    else if (choice == 3) {
        cout << endl;
        cout << "You chose a Creative Career." << endl;
        cout << "Your career focuses on creativity and self-expression." << endl;
    }
    else if (choice == 4) {
        cout << endl;
        cout << "You chose Science." << endl;
        cout << "Your career focuses on research and discovery." << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
