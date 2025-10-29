#include <iostream>
using namespace std;

char getNextChar(char ch) {
  if (ch == 'z') {
    return 'a';
  } else {
    return ch + 1;
  }
}

int main() {
  char ch;
  cout << "Enter a character: ";
  cin >> ch;

  cout << getNextChar(ch);
  return 0;
}
