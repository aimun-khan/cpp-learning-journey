#include <iostream>
#include <string>
using namespace std;

int main() {

    string choices[4] = {
        "Study for your exam",
        "Go out with friends",
        "Help your family",
        "Play games all night"
    };

    cout << "What would you choose?" << endl << endl;

    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << choices[i] << endl;
    }

    return 0;
}
