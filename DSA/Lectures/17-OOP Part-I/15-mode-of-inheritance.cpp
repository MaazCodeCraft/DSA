#include <iostream>
using namespace std;

class Animal {
private:
  string name;
  string color;

  void eat() { cout << "eats\n"; }
  void breathe() { cout << "breathes\n"; }
};

class Fish : protected Animal {
public:
  int fins;

  void swin() {
    // eat(); not possible due to private mode
    cout << "Swim.\n";
  }
};

int main() {
  Fish f1;
  // not possible due to protected mode
  // f1.eat();
  f1.swin();
  return 0;
}