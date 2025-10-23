#include <iostream>
using namespace std;

int main() {
  int marks;
  cout << "Enter You obtain marks out of 100: ";
  cin >> marks;

  if (marks >= 33) {
    cout << "pass" << endl;
  } else {
    cout << "fail" << endl;
  }

  return 0;
}