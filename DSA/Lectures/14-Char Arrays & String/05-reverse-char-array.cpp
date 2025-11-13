#include <cstring>
#include <iostream>
using namespace std;

void reverseCharArray(char word[], int n) {
  int st = 0, end = n - 1;
  while (st < end) {
    swap(word[st++], word[end--]);
  }
}

int main() {
  char word[] = "apple";
  reverseCharArray(word, strlen(word));

  cout << word << endl;
  return 0;
}
