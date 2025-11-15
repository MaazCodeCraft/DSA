#include <iostream>
#include <string>
using namespace std;

bool areAlmostEqual(string str1, string str2) {
  if (str1.length() != str2.length()) {
    return false;
  }

  int diffChar1, diffChar2;
  int diff = 0;

  for (int i = 0; i < str1.length(); i++) {
    if (str1[i] != str2[i]) {
      if (!diff) {
        diffChar1 = str1[i];
        diffChar2 = str2[i];
      } else {
        if (str1[i] != diffChar2 || str2[i] != diffChar1) {
          return false;
        }
      }
      diff++;
    }
  }
  if (diff > 2) {
    return false;
  }
  if (diff == 1) {
    return false;
  }
  return true;
}

int main() {
  string str1 = "bank";
  string str2 = "kanb";
  cout << boolalpha << areAlmostEqual(str1, str2) << endl;
  return 0;
}
