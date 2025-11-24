#include <iostream>
using namespace std;

class Complex {
  int real, img;

public:
  Complex(int r, int i) : real(r), img(i) {}

  void printNum() { cout << real << " + " << img << "i" << endl; }

  Complex operator+(Complex &ref) {
    int realResult = this->real + ref.real;
    int imgResult = this->img + ref.img;
    Complex c3(realResult, imgResult);
    return c3;
  }
};

int main() {
  Complex c1(1, 2);
  Complex c2(3, 4);
  c1.printNum();
  c2.printNum();
  Complex c3 = c1 + c2;
  cout << "Result = ";
  c3.printNum();
  return 0;
}