#include <iostream>
using namespace std;

void checkInput(char n) {
  if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')) {
    cout << "character.";
  } else if (n >= '0' && n <= '9') {
    cout << "Digit";
  } else {
    cout << "invalid";
  }
}

int main() {
  char n;
  cout << "Enter a number: ";
  cin >> n;
  checkInput(n);
  return 0;
}
