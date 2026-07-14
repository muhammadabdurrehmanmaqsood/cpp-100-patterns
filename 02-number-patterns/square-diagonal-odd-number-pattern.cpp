/* * Pattern: Square Diagonal Odd Number Pattern
 * Output:
 * 1 3 5 7 9
 * 3 5 7 9 11
 * 5 7 9 11 13
 * 7 9 11 13 15
 * 9 11 13 15 17
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= totalrows; col++) {
      cout << (2 * (row + col)) - 3 << " ";
    }
    cout << endl;
  }
  return 0;
}