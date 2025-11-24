#include <iostream>
using namespace std;

class Animal {
public:
  Animal() { cout << "Animal object has being created.\n"; }
  ~Animal() { cout << "Animal object has being destroy.\n"; }

  void eat() { cout << "eats\n"; }
  void breathe() { cout << "breathes\n"; }
};

class Fish : public Animal {
public:
  Fish() { cout << "Fish object has being created.\n"; }
  ~Fish() { cout << "Fish object has being destroy.\n"; }

  void swim() { cout << "Swim.\n"; }
};

class Bird : public Animal {
public:
  Bird() { cout << "Bird object has being created.\n"; }
  ~Bird() { cout << "Bird object has being destroy.\n"; }

  void fly() { cout << "Fly.\n"; }
};

class Mammal : public Animal {
public:
  Mammal() { cout << "Mammal object has being created.\n"; }
  ~Mammal() { cout << "Mammal object has being destroy.\n"; }

  void walk() { cout << "Walk.\n"; }
};

int main() {
  Fish f1;
  f1.eat();
  f1.swim();
  Mammal m1;
  m1.eat();
  m1.walk();
  Bird b1;
  b1.eat();
  b1.fly();
  return 0;
}