#include <iostream>
using namespace std;

void showStat(string name, int value) {
    cout << name << ": " << value << endl;
}

int main() {

    showStat("Happiness", 70);
    showStat("Money", 50);
    showStat("Wisdom", 80);

    return 0;
}
