#include <iostream>
using namespace std;

void func(int arr[]) { arr[0] = 1000; }

void func2(int *arr) { arr[0] = 1000; }

int main() {
  int arr[5] = {5, 4, 3, 9, 2};
  func(arr);
  cout << arr[0] << endl;
  return 0;
}