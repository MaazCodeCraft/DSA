#include <iostream>
using namespace std;

class Complex {
  int real, img;

public:
  Complex(int r, int i) : real(r), img(i) {}

  void showNum() { cout << real << " - " << img << "i\n"; }

  Complex operator-(Complex &obj) {
    int realResult = this->real - obj.real;
    int imgResult = this->img - obj.img;

    Complex c3(realResult, imgResult);
    return c3;
  }
};

int main() {
  Complex c1(4, 3);
  Complex c2(1, 2);
  c1.showNum();
  c2.showNum();
  Complex c3 = c1 - c2;
  cout << "Result = ";
  c3.showNum();
  return 0;
}