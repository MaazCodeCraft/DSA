#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter a Number: ";
  cin >> n;

  int first = 0, sec = 1;

  cout << first << " " << sec << " ";

  for (int i = 3; i <= n; i++) {
    int third = first + sec;
    cout << third << " ";
    first = sec;
    sec = third;
  }

  return 0;
}