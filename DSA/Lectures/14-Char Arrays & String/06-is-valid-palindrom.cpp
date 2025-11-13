#include <cstring>
#include <iostream>
using namespace std;

bool isPalindrom(char arr[], int n) {
  int st = 0, end = n - 1;
  while (st < end) {
    if (arr[st++] != arr[end--]) {
      cout << "Not Palindrom.\n";
      return false;
    }
  }
  cout << "Valid Palindrom.\n";
  return true;
}

int main() {
  char arr[] = "racecar";
  isPalindrom(arr, strlen(arr));
  return 0;
}
