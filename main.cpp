#include "Reverse.h"
#include "Truckloads.h"

#include <iostream>

using namespace std;

int main() {
  int i, numCrates, loadSize;
  string s;
  Reverse reverse;
  Truckloads truckloads;
  cin >> i >> s >> numCrates >> loadSize; 
  int iReverse = reverse.reverseDigit(i);
  string sReverse = reverse.reverseString(s);
  int totalTrucks = truckloads.numTrucks(numCrates, loadSize);
  cout << iReverse << " " << sReverse << " " << totalTrucks << endl;
}