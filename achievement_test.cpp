#include <iostream>
using namespace std;

int main() {

    int score;

    cout << "Enter your Life Score: ";
    cin >> score;

    if (score >= 400) {
        cout << endl;
        cout << " LEGENDARY LIFE" << endl;
        cout << "You achieved an incredible life score!" << endl;
    }
    else if (score >= 300) {
        cout << endl;
        cout << " SUCCESSFUL LIFE" << endl;
        cout << "You built a strong life!" << endl;
    }
    else if (score >= 200) {
        cout << endl;
        cout << " SURVIVOR" << endl;
        cout << "You overcame many challenges." << endl;
    }
    else {
        cout << endl;
        cout << "Keep going. Your story is not over!" << endl;
    }

    return 0;
}
