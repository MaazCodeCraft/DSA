#include <iostream>
using namespace std;

int main() {
  int *ptr = NULL;
  cout << ptr << endl;
  cout << *ptr << endl;    // Segmentation fault
  cout << "bye.." << endl; // didnt execute due to Segmentation fault

  return 0;
}