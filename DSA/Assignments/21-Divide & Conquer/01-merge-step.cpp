#include "02-conquer-step.cpp"
#include <iostream>
using namespace std;

void mergeSort(string *arr, int si, int ei) {

  if (si >= ei) {
    return;
  }
  int mid = si + (ei - si) / 2;

  mergeSort(arr, si, mid);
  mergeSort(arr, mid + 1, ei);

  merge(arr, si, mid, ei);
}
