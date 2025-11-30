#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> vec, int i, int tar) {

  if (i == vec.size()) { // BC
    return -1;
  }

  if (vec[i] == tar) { // Kaam
    return i;
  }

  return firstOccurence(vec, i + 1, tar); // bharosa
}

int main() {
  vector<int> vec = {1, 2, 3, 3, 4, 5};
  cout << firstOccurence(vec, 0, 3) << endl;

  return 0;
}