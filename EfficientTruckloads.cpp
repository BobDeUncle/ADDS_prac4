#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  int totalTrucks = 0;
  if (numCrates <= loadSize) {
    return 1;
  } else {
    // Formula for rounding up ((numCrates + 2 - 1) / 2) is from Sparky on StackOverflow
    totalTrucks = this->numTrucks(numCrates/2, loadSize) + this->numTrucks((numCrates + 2 - 1) / 2, loadSize);
  }
  return totalTrucks;
};