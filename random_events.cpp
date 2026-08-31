#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

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

    int randomEvent = rand() % 10;

    cout << "================================" << endl;
    cout << "          RANDOM EVENT" << endl;
    cout << "================================" << endl;

    cout << endl;
    cout << events[randomEvent] << endl;

    return 0;
}
