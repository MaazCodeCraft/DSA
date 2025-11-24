#include <iostream>
using namespace std;

class Animal {
public:
  Animal() { cout << "Animal object has being created.\n"; }
  ~Animal() { cout << "Animal object has being destroy.\n"; }
  void eat() { cout << "eats\n"; }
  void breathe() { cout << "breathes\n"; }
};

class Mammal : public Animal {
public:
  string bloodType;
  Mammal() {
    cout << "Mammal object has being created.\n";
    bloodType = "Warm";
  }
  ~Mammal() { cout << "Mammal object has being destroy.\n"; }
};

class Dog : public Mammal {
public:
  Dog() { cout << "Dog object has being created.\n"; }
  ~Dog() { cout << "Dog object has being destroy.\n"; }
  void tailWag() { cout << "Tail Wag.\n"; }
};

int main() {
  Dog d1;
  d1.eat();
  d1.breathe();
  cout << d1.bloodType << endl;
  d1.tailWag();
  return 0;
}