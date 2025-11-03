#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  int *ptr1 = arr;
  int *ptr2 = arr + 3;

  cout << ptr1 << "\n";
  cout << ptr2 << "\n";

  cout << boolalpha << (ptr2 >= ptr1) << "\n";
  cout << boolalpha << (ptr2 != ptr1) << "\n";
  cout << boolalpha << (ptr2 == ptr1) << "\n";
  cout << boolalpha << (ptr2 <= ptr1) << "\n";

  return 0;
}