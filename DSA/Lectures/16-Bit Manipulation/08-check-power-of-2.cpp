#include <iostream>
using namespace std;

bool checkPowerOf2(int n) {
  if (!((n) & (n - 1))) {
    return true;
  } else {
    return false;
  }
}
int main() {
  cout << boolalpha << checkPowerOf2(32) << endl;
  cout << boolalpha << checkPowerOf2(31) << endl;
  return 0;
}