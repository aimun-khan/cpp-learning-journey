#include <iostream>
using namespace std;

void checkAchievements(
    int happiness,
    int money,
    int wisdom,
    int confidence,
    int kindness,
    int ambition
) {

    cout << endl;
    cout << "=================================" << endl;
    cout << "        ACHIEVEMENTS" << endl;
    cout << "=================================" << endl;

    bool unlocked = false;

    if (wisdom >= 80) {
        cout << " WISE MIND" << endl;
        cout << "You reached 80 Wisdom!" << endl;
        cout << endl;
        unlocked = true;
    }

    if (confidence >= 80) {
        cout << " FEARLESS" << endl;
        cout << "You reached 80 Confidence!" << endl;
        cout << endl;
        unlocked = true;
    }

    if (kindness >= 30) {
        cout << " KIND SOUL" << endl;
        cout << "You reached 30 Kindness!" << endl;
        cout << endl;
        unlocked = true;
    }

    if (ambition >= 30) {
        cout << " AMBITIOUS" << endl;
        cout << "You reached 30 Ambition!" << endl;
        cout << endl;
        unlocked = true;
    }

    if (money >= 80) {
        cout << " MONEY MAKER" << endl;
        cout << "You reached 80 Money!" << endl;
        cout << endl;
        unlocked = true;
    }

    if (happiness >= 80) {
        cout << " HAPPY LIFE" << endl;
        cout << "You reached 80 Happiness!" << endl;
        cout << endl;
        unlocked = true;
    }

    if (!unlocked) {
        cout << "No achievements unlocked yet." << endl;
        cout << "Keep making decisions!" << endl;
    }
}

int main() {

    int happiness = 85;
    int money = 60;
    int wisdom = 90;
    int confidence = 75;
    int kindness = 35;
    int ambition = 40;

    checkAchievements(
        happiness,
        money,
        wisdom,
        confidence,
        kindness,
        ambition
    );

    return 0;
}
