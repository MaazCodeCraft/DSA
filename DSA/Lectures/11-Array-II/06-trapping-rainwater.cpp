#include <iostream>
using namespace std;

// TC: O(n) + O(n) + O(n) => O(3n) => O(n) final TC = O(n)
void waterTrapped(int *height, int n) {
  int leftMax[20000], rightMax[20000];

  leftMax[0] = height[0];
  rightMax[n - 1] = height[n - 1];

  for (int i = 1; i < n; i++) { // O(n)
    leftMax[i] = max(leftMax[i - 1], height[i - 1]);
  }

  for (int i = n - 2; i >= 0; i--) { // O(n)
    rightMax[i] = max(rightMax[i + 1], height[i + 1]);
  }

  int waterTrapped = 0;

  for (int i = 0; i < n; i++) { // O(n)
    int currWaterTrapped = min(rightMax[i], leftMax[i]) - height[i];
    if (currWaterTrapped > 0) {
      waterTrapped += currWaterTrapped;
    }
  }

  cout << "Wter Trapped = " << waterTrapped << endl;
}

int main() {
  int height[] = {4, 2, 0, 6, 3, 2, 5};
  int n = sizeof(height) / sizeof(int);
  waterTrapped(height, n);
  return 0;
}