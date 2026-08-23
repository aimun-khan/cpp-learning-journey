#include <iostream>
using namespace std;

int main() {

    int scores[5] = {70, 85, 90, 65, 80};

    cout << "Your scores:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << scores[i] << endl;
    }

    return 0;
}
