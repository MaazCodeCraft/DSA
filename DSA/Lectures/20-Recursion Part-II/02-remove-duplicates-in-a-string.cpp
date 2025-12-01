#include <iostream>
using namespace std;

void removeDuplicates(string str, string ans, int i, int *map) { // withIndexI
  if (i == str.size()) {
    cout << "ans 1 : " << ans << endl;
    return;
  }

  char ch = str[i];
  int mapIndex = (int)(ch - 'a');

  if (map[mapIndex] == true) { // duplicate
    removeDuplicates(str, ans, i + 1, map);
  } else { // not duplicate
    map[mapIndex] = true;
    removeDuplicates(str, ans + str[i], i + 1, map);
  }
}

void removeDuplicates2(string str, string ans, int *map) { // withoutIndexI
  if (str.size() == 0) {
    cout << "ans 2 : " << ans << endl;
    return;
  }

  int n = str.size();
  char ch = str[n - 1];
  int mapIndex = (int)(ch - 'a');
  str = str.substr(0, n - 1);

  if (map[mapIndex] == true) { // duplicate
    removeDuplicates2(str, ans, map);
  } else { // not duplicate
    map[mapIndex] = true;
    removeDuplicates2(str, ch + ans, map);
  }
}

int main() {
  string str = "appnnacollege";
  string ans = "";
  int i = 0;
  int map[26] = {false};

  removeDuplicates(str, ans, i, map);
  // removeDuplicates2(str, ans, map);
  return 0;
}