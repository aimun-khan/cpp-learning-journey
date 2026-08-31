#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    string importantChoice;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << endl;
    cout << "You helped someone who needed you." << endl;

    importantChoice = "You chose kindness.";

    cout << endl;
    cout << "Your decision has been remembered." << endl;

    cout << endl;
    cout << "PLAYER: " << name << endl;
    cout << "MEMORY: " << importantChoice << endl;

    return 0;
}
