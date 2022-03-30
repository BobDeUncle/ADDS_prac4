#include "Reverse.h"

#include <math.h>

using namespace std;

int Reverse::reverseDigit(int value) {
  if (value < 0) {
    return -1;
  }

  int tempValue = value;
  // Gets the amount of digits of int value, from squelart on StackOverflow
  int digits = 0; do { tempValue /= 10; digits++; } while (tempValue != 0);
  
  if (digits == 1) {
    return value;
  } else {
    int power = pow(10, digits-1);
    int reversed = this->reverseDigit(value % power);
    int firstDigit = value / power;
    return (reversed * 10) + firstDigit;
  }
}

string Reverse::reverseString(string letters) {
  if (letters.length() == 1) {
    return letters;
  } else {
    char firstLetter = letters.at(0);
    string lettersCut = letters.substr(1, letters.length() - 1);
    string reversed = this->reverseString(lettersCut);
    return reversed + firstLetter;
  }
  return "ERROR";
}
