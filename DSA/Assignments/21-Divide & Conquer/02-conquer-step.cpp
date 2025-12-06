#include <iostream>
#include <vector>
using namespace std;

void merge(string *arr, int si, int mid, int ei) {
  vector<string> temp;
  int i = si, j = mid + 1;

  while (i <= mid && j <= ei) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i++]);
    } else {
      temp.push_back(arr[j++]);
    }
  }

  while (i <= mid) {
    temp.push_back(arr[i++]);
  }

  while (j <= ei) {
    temp.push_back(arr[j++]);
  }

  for (int i = si, x = 0; i <= ei; i++) {
    arr[i] = temp[x++];
  }
}