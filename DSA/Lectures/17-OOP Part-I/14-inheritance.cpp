#include <iostream>
using namespace std;

class Animal {
public:
  string name;
  string color;

  void eat() { cout << "eats\n"; }
  void breathe() { cout << "breathes\n"; }
};

class Fish : public Animal {
  int fins;

  void swin() { cout << "Swim.\n"; }
};

int main() { return 0; }