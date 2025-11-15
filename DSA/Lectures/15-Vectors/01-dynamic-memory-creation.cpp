#include <iostream>
using namespace std;

int main() {
  int sz;
  cout << "enter size : ";
  cin >> sz;

  int *arr = new int[sz];
  int x = 1;
  for (int i = 0; i < sz; i++) {
    arr[i] = x++;
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}