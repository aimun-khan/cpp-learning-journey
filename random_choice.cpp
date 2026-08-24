#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int choice = rand() % 4 + 1;

    cout << "Today's random event number is: " << choice << endl;

    return 0;
}
