#include <cstring>
#include <iostream>
using namespace std;

int main() {
  // 01 -> method
  char work[] = "code";
  cout << work << endl;
  cout << strlen(work) << endl;

  // 02 -> method
  char work2[5] = "code";
  cout << work2 << endl;
  cout << strlen(work2) << endl;

  // 03 -> method
  char work3[] = {'c', 'o', 'd', 'e', '\0'};
  cout << work3 << endl;
  cout << strlen(work3) << endl;

  // 04 -> method
  char work4[50] = {'c', 'o', 'd', 'e', '\0'};
  cout << work4 << endl;
  cout << strlen(work4) << endl;

  return 0;
}