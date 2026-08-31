#include <iostream>
#include <string>
using namespace std;

int main() {

    string events[10] = {
        "Your friend needs your help.",
        "You found money on the road.",
        "You have an important exam tomorrow.",
        "Your family needs your help.",
        "You receive a job opportunity.",
        "Someone insults you.",
        "You find an interesting book.",
        "Your friend invites you to a party.",
        "You have a chance to learn a new skill.",
        "Someone gives you useful advice."
    };

    cout << "Life Events:" << endl << endl;

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << events[i] << endl;
    }

    return 0;
}
