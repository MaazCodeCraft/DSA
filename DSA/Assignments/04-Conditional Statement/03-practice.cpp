#include <iostream>

using namespace std;

int main() {
  int income;
  float tax = 0;
  cout << "Enter Your Income in (lakhs): ";
  cin >> income;

  if (income <= 5) {
    tax += 0;
  } else if (income >= 6 && income <= 15) {
    tax = income * 0.3;
  } else {
    tax = income * 0.5;
  }

  cout << "Tax = " << (tax * 100000) << endl;

  return 0;
}