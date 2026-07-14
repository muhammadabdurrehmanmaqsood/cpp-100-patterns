/* * Pattern: Right Triangle Fibonacci Number Pattern
 * Output:
 * 1
 * 1 2
 * 3 5 8
 * 13 21 34 55
 * 89 144 233 377 610
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  int num1 = 0, num2 = 1, sum = num1 + num2;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= row; col++) {
      cout << sum << " ";
      sum = num1 + num2;
      num1 = num2;
      num2 = sum;
    }
    cout << endl;
  }
  return 0;
}