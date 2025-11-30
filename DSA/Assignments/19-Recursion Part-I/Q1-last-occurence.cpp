#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int> vec, int i, int tar) {

  if (i == vec.size()) { // BC
    return -1;
  }

  int indxFound = lastOccurence(vec, i + 1, tar);
  if (indxFound == -1 && vec[i] == tar) {
    return i;
  }
  return indxFound;
}

int main() {
  vector<int> vec = {1, 2, 3, 3, 4, 5};
  cout << lastOccurence(vec, 0, 3) << endl;

  return 0;
}