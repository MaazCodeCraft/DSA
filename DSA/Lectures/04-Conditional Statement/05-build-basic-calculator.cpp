#include <iostream>
using namespace std;

int main() {
  int num1, num2;

  cout << "Enter 1st Number: ";
  cin >> num1;
  cout << "Enter 2nd Number: ";
  cin >> num2;

  char symbol;
  cout << "Enter Expression (+,-,*,/): ";
  cin >> symbol;

  switch (symbol) {
  case '+':
    cout << "Sum = " << num1 + num2 << endl;
    break;
  case '-':
    cout << "Difference = " << num1 - num2 << endl;
    break;
  case '*':
    cout << "Product = " << num1 * num2 << endl;
    break;
  case '/':
    cout << "Division = " << num1 / num2 << endl;
    break;

  default:
    cout << "Invalid Command" << endl;
    break;
  }

  return 0;
}