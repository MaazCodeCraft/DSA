#include <iostream>
using namespace std;

int main() {
  float pen, pencil, eraser;

  cout << "Enter Pen Price: ";
  cin >> pen;

  cout << "Enter eraser Price: ";
  cin >> eraser;

  cout << "Enter pencil Price: ";
  cin >> pencil;

  float totalBill = pen + eraser + pencil;
  float GST = totalBill + (totalBill * 0.18);

  cout << "Total Bill: " << totalBill << endl;
  cout << "Total with GST: " << GST << endl;
  return 0;
}