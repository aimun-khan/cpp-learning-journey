#include <iostream> 
int main() {
  double num1, num2;
char op;
std::cout << "Enter first number: ";
std::cin >> num1;
std::cout << "Enter an operator (+,-,*,/): ";
std::cin >> op;
std::cout << "enter seconf number: ";
std::cin >> num2;
if (op == '+') {
std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
} else if (op == '-') {
std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
} else if (op == '*') {
std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
// } else if (op == '/') {
  if (num2 != 0) {
std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
} else { 
std::cout << "Error: Division by zero is not allowed. " << std::endl;
  }
} else { 
std::cout << "Error: Invalid operator. " << std::endl;
}
return 0;
}
