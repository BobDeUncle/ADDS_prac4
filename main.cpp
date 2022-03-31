#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

#include <iostream>

using namespace std;

int main() {
  int i, numCrates, loadSize;
  string s;
  Reverse reverse;
  Truckloads truckloads;
  cin >> i >> s >> numCrates >> loadSize; 
  cout << numCrates << endl;
  int iReverse = reverse.reverseDigit(i);
  if (iReverse == -1) {
    cout << "ERROR ";
  } else {
    cout << iReverse << " ";
  }
  string sReverse = reverse.reverseString(s);
  cout << sReverse << " ";
  int totalTrucks = truckloads.numTrucks(numCrates, loadSize);
  if (totalTrucks == -1) {
    cout << "ERROR ERROR" << endl;
  } else {
    cout << totalTrucks << " " << totalTrucks << endl;
  }
}