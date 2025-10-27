#include <iostream>
using namespace std;

int y = 35;
void sum(int a, int b) {
  if (a >= 1) {
    int x = 20;
    cout << x << endl;
  }
  // cout << x << endl; not possible because of local scope

  cout << y << endl;
  int s = a + b;
  cout << s << endl;
}
int main() {
  sum(10, 20);
  // cout << s << endl; not possible because of local scope
  cout << y << endl;
  return 0;
}
