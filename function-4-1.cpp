#include <algorithm>
#include <iostream>

using namespace std;
int *readNumbers() {
  int *array = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> array[i];
  }
  return array;
}
void printNumbers(int *numbers, int length) {
  for (int i = 0; i < length; i++) {
    cout << i << ' ' << numbers[i] << endl;
  }
}
int secondSmallestSum(int *numbers, int length) {
  int *newarray = new int[length];
  std::copy(numbers, numbers + length, newarray);
  std::sort(newarray, newarray + length);
  return newarray[1];
}
