#include <iostream>
#include <vector>
using namespace std;

void occurence(vector<int> arr, int i, int key) {
  if (i == arr.size()) {
    return;
  }

  if (arr[i] == key) {
    cout << i << " ";
  }

  occurence(arr, i + 1, key);
}

int main() {
  vector<int> arr = {3, 2, 4, 5, 6, 2, 7, 2, 2};
  occurence(arr, 0, 2);
  return 0;
}