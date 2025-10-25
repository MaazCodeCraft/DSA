#include <iostream>
using namespace std;

int main() {

  do {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if (n % 10 == 0) {
      break;
    }

    cout << "You enter " << n << endl;

  } while (true);

  return 0;
}