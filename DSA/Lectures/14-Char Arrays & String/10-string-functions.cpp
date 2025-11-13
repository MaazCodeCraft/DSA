#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "hello world";

  cout << str.length() << endl;
  cout << str.at(3) << endl;
  cout << str.substr(1, 5) << endl;
  cout << str.find("world") << endl;
  cout << str.find("bye") << endl;
  cout << str.find("o", 5) << endl;

  return 0;
}
