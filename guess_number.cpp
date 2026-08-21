#include <iostream>
using namespace std;
int main() {
int secretNumber = 7;
int guess;
cout << "Guess the number: ";
cin >> guess;
while (guess != secretNumber) {
cout << "Wrong! Try again: ";
cin >> guess;
}
cout << "Correct! " << endl;
return 0;
}
