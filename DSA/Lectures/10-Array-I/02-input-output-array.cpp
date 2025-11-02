#include <iostream>
using namespace std;

int main() {
  int sz;
  cout << "enter array length: ";
  cin >> sz;

  int arr[sz];
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++) {
    cout << "enter (" << i << ") index value : ";
    cin >> arr[i];
  }

  cout << "array elements are: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }

  cout << endl;

  return 0;
}