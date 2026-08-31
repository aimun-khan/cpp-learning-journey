#include <iostream>
using namespace std;

void showEvent(int event) {

    if (event == 1) {
        cout << "Your friend needs your help." << endl;
    }
    else if (event == 2) {
        cout << "You found money on the road." << endl;
    }
    else if (event == 3) {
        cout << "You have an important exam tomorrow." << endl;
    }
    else if (event == 4) {
        cout << "Your family needs your help." << endl;
    }
    else {
        cout << "Something unexpected happened." << endl;
    }
}

int main() {

    int event;

    cout << "Enter event number 1-4: ";
    cin >> event;

    showEvent(event);

    return 0;
}
