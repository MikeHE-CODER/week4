#include <iostream>
extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);
using namespace std;
int main() {
  int *numbers1 = readNumbers();
  int *numbers2 = readNumbers();
  cout << equalsArray(numbers1, numbers2, 10);
  delete[] numbers1;
  delete[] numbers2;
}
