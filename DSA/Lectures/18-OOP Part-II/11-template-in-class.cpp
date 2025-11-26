#include <iostream>
using namespace std;

template <typename T>

class Box {
public:
  T content;
  Box(T cont) : content(cont) {}

  void displayContent() { cout << "Content: " << content << endl; }
};

int main() {
  Box<int> b1(10);
  b1.displayContent();
  Box<string> b2("Hello");
  b2.displayContent();
  return 0;
}