#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int *ptr = &a;

  cout << *ptr << "\n";

  *ptr = 20;
  cout << a << endl;

  return 0;
}