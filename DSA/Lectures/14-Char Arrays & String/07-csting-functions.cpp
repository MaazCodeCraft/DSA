#include <cstring>
#include <iostream>
using namespace std;

int main() {
  // strcpy
  char str1[100];
  // str1 = "hello"; error
  strcpy(str1, "hello world");
  cout << str1 << endl;

  // strcat
  char str2[100] = "hello";
  char str3[100] = " bye";
  strcat(str2, str3);
  cout << str2 << endl;

  // strcmp
  char str4[100] = "abc";
  char str5[100] = " abc";
  cout << strcmp("abc", "xyz") << endl; // -1
  cout << strcmp("xyz", "abc") << endl; // 1
  cout << strcmp("abc", "abc") << endl; // 0

  return 0;
}
