#include <iostream>
using namespace std;

int main() {
  string str = "hello";
  cout << str << endl;
  str = "Bye";
  cout << str << endl;

  string str1;
  getline(cin, str1);
  cout << str1 << endl;

  return 0;
}
