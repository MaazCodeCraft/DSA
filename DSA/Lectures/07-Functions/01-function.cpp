#include <iostream>
using namespace std;

void sayHello() { cout << "Hello ): \n"; }

void assistant() {
  sayHello();
  cout << "work done!\n";
}

int main() {
  assistant(); // function call
  return 0;
}