/* * Pattern: Square Multiplication Table Pattern
 * Output:
 * 1 2 3 4 5
 * 2 4 6 8 10
 * 3 6 9 12 15
 * 4 8 12 16 20
 * 5 10 15 20 25
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= totalrows; col++) {
      cout << (row * col) << " ";
    }
    cout << endl;
  }
  return 0;
}