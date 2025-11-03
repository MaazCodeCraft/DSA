#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int *ptr = &x;

  int y = 25;
  ptr = &y; // possible
  cout << *ptr << endl;

  int arr[5];
  cout << arr << endl;
  int z = 10;
  // arr = &z; //not possible

  return 0;
}