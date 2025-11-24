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
public:
  int fins;

  void swim() { cout << "Swim.\n"; }
};

int main() {
  Fish f1;
  f1.fins = 3;
  cout << f1.fins << endl;
  f1.breathe();
  f1.eat();
  f1.swim();
  return 0;
}