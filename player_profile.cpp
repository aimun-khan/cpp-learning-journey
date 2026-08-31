#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int age;

    cout << "================================" << endl;
    cout << "       PLAYER PROFILE" << endl;
    cout << "================================" << endl;

    cout << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << endl;
    cout << "Welcome, " << name << "!" << endl;
    cout << "Your journey begins at age " << age << "." << endl;

    return 0;
}
