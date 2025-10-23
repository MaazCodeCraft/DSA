#include <iostream>
using namespace std;

int main() {
  char alphabet;
  cout << "Enter day alphabet to check is it vowel or not: ";
  cin >> alphabet;

  switch (alphabet) {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
    cout << "Vowel" << endl;
    break;

  default:
    cout << "Consonant" << endl;
    break;
  }

  return 0;
}