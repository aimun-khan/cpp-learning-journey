#include <iostream>
using namespace std;

int main() {

    int trust;

    cout << "Enter trust level: ";
    cin >> trust;

    cout << endl;

    if (trust >= 80) {
        cout << "Relationship: Best Friends" << endl;
    }
    else if (trust >= 60) {
        cout << "Relationship: Close Friends" << endl;
    }
    else if (trust >= 40) {
        cout << "Relationship: Friends" << endl;
    }
    else if (trust >= 20) {
        cout << "Relationship: Distant" << endl;
    }
    else {
        cout << "Relationship: Broken" << endl;
    }

    return 0;
}
