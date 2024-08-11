#include <iostream>
extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int secondSmallestSum(int *numbers, int length);
using namespace std;
int main() {
  int *numbers = readNumbers();
  int smallsecond = secondSmallestSum(numbers, 10);
  cout << smallsecond << endl;
}
