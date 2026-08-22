#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {

    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        cout << "Answer = " << add(num1, num2);
    }
    else if (op == '-') {
        cout << "Answer = " << subtract(num1, num2);
    }
    else if (op == '*') {
        cout << "Answer = " << multiply(num1, num2);
    }
    else if (op == '/' && num2 != 0) {
        cout << "Answer = " << divide(num1, num2);
    }
    else {
        cout << "Invalid operation";
    }

    return 0;
}
