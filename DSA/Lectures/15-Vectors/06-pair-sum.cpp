#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int tar) { // TC: O(n)
  int st = 0, end = arr.size() - 1;
  vector<int> res;

  while (st < end) {
    int currSum = arr[st] + arr[end];
    if (currSum == tar) {
      res.push_back(st);
      res.push_back(end);
      return res;
    } else if (currSum > tar) {
      end--;
    } else {
      st++;
    }
  }
  return res;
}

int main() {
  vector<int> arr = {3, 2, 4};
  int tar = 6;

  vector<int> ans = pairSum(arr, tar);
  cout << "(" << ans[0] << ")(" << ans[1] << ")" << endl;
  return 0;
}