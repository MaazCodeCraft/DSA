#include <iostream>
using namespace std;

int main() {
  int math, sci, eng;

  cout << "Enter English Marks: ";
  cin >> eng;

  cout << "Enter Math Marks: ";
  cin >> math;

  cout << "Enter Science Marks: ";
  cin >> sci;

  float avg = (eng + sci + math) / 3;

  cout << "Average: " << avg << endl;

  return 0;
}