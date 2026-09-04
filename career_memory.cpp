#include <iostream>
#include <string>
using namespace std;

int main() {

    string career;

    cout << "Choose your career:" << endl;

    cout << "1. Technology" << endl;
    cout << "2. Business" << endl;
    cout << "3. Creative" << endl;
    cout << "4. Science" << endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
        career = "Technology";
    }
    else if (choice == 2) {
        career = "Business";
    }
    else if (choice == 3) {
        career = "Creative";
    }
    else if (choice == 4) {
        career = "Science";
    }
    else {
        career = "Unknown";
    }

    cout << endl;
    cout << "Your chosen career: " << career << endl;

    return 0;
}
