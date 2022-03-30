#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

#include <iostream>

using namespace std;

int main() {
  int i, numCrates, loadSize;
  string s;
  Reverse reverse;
  EfficientTruckloads truckloads;
  cin >> i >> s >> numCrates >> loadSize; 
  int iReverse = reverse.reverseDigit(i);
  if (iReverse == -1) {
    cout << "ERROR ";
  } else {
    cout << iReverse << " ";
  }
  string sReverse = reverse.reverseString(s);
  cout << sReverse << " ";
  if (numCrates < 2 || numCrates > 10000 || loadSize < 1 || loadSize > (numCrates - 1)) {
    cout << "ERROR ERROR" << endl;
  } else {
    int totalTrucks = truckloads.numTrucks(numCrates, loadSize);
    cout << totalTrucks << " " << totalTrucks << endl;
  }
}