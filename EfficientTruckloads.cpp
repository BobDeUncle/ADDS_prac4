#include "EfficientTruckloads.h"

#include <iostream>
using namespace std;

int memoArray[10000][10000] = {{0}};

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  if (numCrates <= 0 || loadSize <= 0) {
    return -1;
  } else if (numCrates <= loadSize) {
    return 1;
  } else {
    if (memoArray[numCrates/2][loadSize] == 0) {
      memoArray[numCrates/2][loadSize] = this->numTrucks(numCrates/2, loadSize);
    }
    if (memoArray[(numCrates + 2 - 1) / 2][loadSize] == 0) {
      // Formula for rounding up ((numCrates + 2 - 1) / 2) is from Sparky on StackOverflow
      memoArray[(numCrates + 2 - 1) / 2][loadSize] = this->numTrucks((numCrates + 2 - 1) / 2, loadSize);
    }
  }
  return memoArray[numCrates/2][loadSize] + memoArray[(numCrates + 2 - 1) / 2][loadSize];
};