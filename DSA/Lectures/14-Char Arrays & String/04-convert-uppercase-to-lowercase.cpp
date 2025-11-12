#include <cstring>
#include <iostream>
using namespace std;

void lowerCase(char word[], int n) {
  for (int i = 0; i < n; i++) {
    char ch = word[i];
    if (ch >= 'a' && ch <= 'z') {
      continue;
    } else {
      word[i] = ch - 'A' + 'a';
    }
  }
}

int main() {
  char word[] = "aPplE";
  lowerCase(word, strlen(word));

  cout << word << endl;
  return 0;
}
