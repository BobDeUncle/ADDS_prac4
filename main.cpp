#include "Reverse.h"

#include <iostream>

using namespace std;

int main() {
  int i, numCrates, loadSize;
  string s;
  Reverse reverse;
  cin >> i >> s >> numCrates >> loadSize; 
  int iReverse = reverse.reverseDigit(i);
  string sReverse = reverse.reverseString(s);
  cout << iReverse << " " << sReverse << endl;
}