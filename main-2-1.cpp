#include <iostream>
extern int *readNumbers();
extern void hexDigits(int *numbers, int length);
using namespace std;
int main() {
  int *numbers = readNumbers();
  hexDigits(numbers, 10);
}
