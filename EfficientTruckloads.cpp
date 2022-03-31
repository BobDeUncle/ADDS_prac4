#include "EfficientTruckloads.h"

#include <map>

#include <iostream>
using namespace std;

map<string, int> memoMap;

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  string key1 = to_string(numCrates/2) + '-' + to_string(loadSize);
  string key2 = to_string((numCrates + 2 - 1) / 2) + '-' + to_string(loadSize);

  if (numCrates <= 0 || loadSize <= 0) {
    return -1;
  } else if (numCrates <= loadSize) {
    return 1;
  } else {
    if (memoMap.find(key1) == memoMap.end()) {
      // Key does not exist
      memoMap.insert(pair<string, int> (key1, this->numTrucks(numCrates/2, loadSize)) );
    } 
    if (memoMap.find(key2) == memoMap.end()) {
      // Key does not exist
      // Formula for rounding up ((numCrates + 2 - 1) / 2) is from Sparky on StackOverflow
      memoMap.insert(pair<string, int> (key2, this->numTrucks((numCrates + 2 - 1) / 2, loadSize) ));
    }
  }

  return memoMap.find(key1)->second + memoMap.find(key2)->second;
};




  // if (memoTable[numCrates/2][loadSize] == 0) {
    //   memoTable[numCrates/2][loadSize] = this->numTrucks(numCrates/2, loadSize);
    // }
    // if (memoTable[(numCrates + 2 - 1) / 2][loadSize] == 0) {
    //   // Formula for rounding up ((numCrates + 2 - 1) / 2) is from Sparky on StackOverflow
    //   memoTable[(numCrates + 2 - 1) / 2][loadSize] = this->numTrucks((numCrates + 2 - 1) / 2, loadSize);
    // }
  // return memoTable[numCrates/2][loadSize] + memoTable[(numCrates + 2 - 1) / 2][loadSize];