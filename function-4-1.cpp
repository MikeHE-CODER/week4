#include <algorithm>
#include <iostream>
#include <vector>
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
  std::vector<int> newarray;
  for (int i = 0; i < length; i++) {
    int sum = 0;
    for (int j = i; j < length; j++) {
      sum += numbers[j];
      newarray.push_back(sum);
    }
  }
  std::sort(newarray.begin(), newarray.end());
  return newarray[1];
}
