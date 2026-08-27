#include <iostream>
using namespace std;

void showAgeStage(int age) {

    if (age <= 12) {
        cout << "Childhood" << endl;
    }
    else if (age <= 18) {
        cout << "Teenage" << endl;
    }
    else if (age <= 30) {
        cout << "Young Adult" << endl;
    }
    else if (age <= 50) {
        cout << "Adult" << endl;
    }
    else {
        cout << "Later Life" << endl;
    }
}

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Life stage: ";
    showAgeStage(age);

    return 0;
}
