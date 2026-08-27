#include <iostream>
using namespace std;

int main() {

    int age = 12;

    cout << "Your life begins at age " << age << "." << endl;

    for (int year = 1; year <= 5; year++) {

        age++;

        cout << "You are now " << age << " years old." << endl;
    }

    return 0;
}
