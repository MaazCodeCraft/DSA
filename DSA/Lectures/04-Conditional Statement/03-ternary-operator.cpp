#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "Enter You age: ";
  cin >> age;

  bool isAdult = (age >= 18) ? true : false;
  cout << isAdult << endl;

  int a = 10, b = 5;
  int largest = (a >= b) ? a : b;
  cout << largest << endl;

  int num = 10;
  bool isEven = (num % 2 == 0) ? true : false;
  cout << isEven << endl;

  return 0;
}