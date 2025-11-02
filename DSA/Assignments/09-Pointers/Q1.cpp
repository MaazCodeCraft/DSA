#include <iostream>
using namespace std;

int main() {
  // Guess the output
  int x = 7;
  int *ptr = &x;
  cout << *ptr << endl;
  return 0;
}