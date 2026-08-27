#include <iostream>
using namespace std;

int main() {

    int kindness = 0;
    int ambition = 0;
    int honesty = 0;

    int choice;

    cout << "Someone asks you for help." << endl;

    cout << "1. Help them" << endl;
    cout << "2. Focus on your own work" << endl;

    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        kindness += 10;
        honesty += 5;
    }
    else if (choice == 2) {
        ambition += 10;
    }

    cout << endl;
    cout << "Your personality:" << endl;

    cout << "Kindness: " << kindness << endl;
    cout << "Ambition: " << ambition << endl;
    cout << "Honesty: " << honesty << endl;

    return 0;
}
