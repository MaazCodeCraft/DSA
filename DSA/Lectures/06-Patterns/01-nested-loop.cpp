#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter a Number : ";
  cin >> n;

  // outer loop
  for (int i = 1; i <= n; i++) {
    // inner loop
    for (int j = 1; j <= n; j++) {
      // work done in inner loop
      cout << i << " ";
    }
    cout << "\n";
  }

  return 0;
}