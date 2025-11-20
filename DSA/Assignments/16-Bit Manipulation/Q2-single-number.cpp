#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> arr) {
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    ans ^= arr[i];
  }

  return ans;
}
int main() {
  vector<int> arr = {1, 2, 2};
  cout << singleNumber(arr) << endl;
  return 0;
}