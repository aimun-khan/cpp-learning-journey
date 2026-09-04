#include <iostream>
#include <string>
using namespace std;

int main() {

    int careerChoice;
    string career;

    cout << "====================================" << endl;
    cout << "        LIFE SWITCH - FUTURE" << endl;
    cout << "====================================" << endl;
    cout << endl;

    cout << "Choose your career:" << endl;
    cout << "1. Technology" << endl;
    cout << "2. Business" << endl;
    cout << "3. Creative Career" << endl;
    cout << "4. Science" << endl;
    cout << endl;

    cout << "Choice: ";
    cin >> careerChoice;

    if (careerChoice == 1) {
        career = "Technology";
    }
    else if (careerChoice == 2) {
        career = "Business";
    }
    else if (careerChoice == 3) {
        career = "Creative";
    }
    else if (careerChoice == 4) {
        career = "Science";
    }
    else {
        career = "Unknown";
    }

    cout << endl;
    cout << "Your career: " << career << endl;
    cout << endl;

    // BRANCH 1
    if (career == "Technology") {

        cout << "A small startup contacts you." << endl;
        cout << "They want you to help build a new app." << endl;
        cout << endl;

        cout << "1. Accept the challenge" << endl;
        cout << "2. Focus on learning first" << endl;

        int choice;
        cout << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << endl;
            cout << "You joined the startup!" << endl;
            cout << "Your experience increased." << endl;
        }
        else {
            cout << endl;
            cout << "You decided to improve your skills first." << endl;
            cout << "Your knowledge increased." << endl;
        }
    }

    // BRANCH 2
    else if (career == "Business") {

        cout << "A friend asks you to start a small business." << endl;
        cout << endl;

        cout << "1. Take the opportunity" << endl;
        cout << "2. Wait for a better idea" << endl;

        int choice;
        cout << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << endl;
            cout << "You started your first business!" << endl;
            cout << "Your leadership experience increased." << endl;
        }
        else {
            cout << endl;
            cout << "You decided to wait and plan carefully." << endl;
            cout << "Your planning skills increased." << endl;
        }
    }

    // BRANCH 3
    else if (career == "Creative") {

        cout << "You receive an opportunity to display your work." << endl;
        cout << endl;

        cout << "1. Show your work publicly" << endl;
        cout << "2. Improve it privately" << endl;

        int choice;
        cout << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << endl;
            cout << "People noticed your creativity!" << endl;
            cout << "Your confidence increased." << endl;
        }
        else {
            cout << endl;
            cout << "You spent more time improving your craft." << endl;
            cout << "Your creative skills increased." << endl;
        }
    }

    // BRANCH 4
    else if (career == "Science") {

        cout << "A research team invites you to join a project." << endl;
        cout << endl;

        cout << "1. Join the research project" << endl;
        cout << "2. Continue studying independently" << endl;

        int choice;
        cout << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << endl;
            cout << "You joined the research team!" << endl;
            cout << "Your research experience increased." << endl;
        }
        else {
            cout << endl;
            cout << "You continued your independent research." << endl;
            cout << "Your knowledge increased." << endl;
        }
    }

    else {
        cout << "No career branch available." << endl;
    }

    cout << endl;
    cout << "====================================" << endl;
    cout << "        END OF THIS CHAPTER" << endl;
    cout << "====================================" << endl;

    return 0;
}
