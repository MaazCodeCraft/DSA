#include <iostream>
using namespace std;

void func() {
  cout << "Function call....\n";
  func(); // stackover arise when bc is missing or used to much local variables
          // in each call
}

int main() {
  func();
  return 0;
}