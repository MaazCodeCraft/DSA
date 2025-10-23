#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a Number: ";
  cin >> num;

  if (num == 0) {
    cout << "Zero" << endl;
  } else if (num > 0) {
    cout << "Positive" << endl;
  } else {
    cout << "Negative" << endl;
  }

  return 0;
}