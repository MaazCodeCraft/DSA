#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char word[50];
  cin >> word;
  cout << "word is = " << word << endl;
  cout << "length is = " << strlen(word) << endl;

  char scentence[50];
  cin.ignore(); // clear newline from buffer
  cin.getline(scentence, 50);
  // cin.getline(scentence, 50, "*");

  cout << "scentence is = " << scentence << endl;
  cout << "scentence[0] = " << scentence[0] << endl;
  cout << "length is = " << strlen(scentence) << endl;
  return 0;
}
