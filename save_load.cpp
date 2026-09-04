#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string name;
    int age;
    int happiness;
    int money;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter happiness: ";
    cin >> happiness;

    cout << "Enter money: ";
    cin >> money;

    // SAVE DATA
    ofstream saveFile("life_save.txt");

    saveFile << name << endl;
    saveFile << age << endl;
    saveFile << happiness << endl;
    saveFile << money << endl;

    saveFile.close();

    cout << endl;
    cout << "Game saved successfully!" << endl;

    // LOAD DATA
    ifstream loadFile("life_save.txt");

    string savedName;
    int savedAge;
    int savedHappiness;
    int savedMoney;

    getline(loadFile, savedName);
    loadFile >> savedAge;
    loadFile >> savedHappiness;
    loadFile >> savedMoney;

    loadFile.close();

    cout << endl;
    cout << "----------- LOADED GAME -----------" << endl;
    cout << "Name: " << savedName << endl;
    cout << "Age: " << savedAge << endl;
    cout << "Happiness: " << savedHappiness << endl;
    cout << "Money: " << savedMoney << endl;

    return 0;
}
