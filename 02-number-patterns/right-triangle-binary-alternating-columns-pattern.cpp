/* * Pattern: Right Triangle Binary Alternating Columns Pattern
 * Output:
 * 1
 * 1 0
 * 1 0 1
 * 1 0 1 0
 * 1 0 1 0 1
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= row; col++) {
      cout << (col % 2) << " ";
    }
    cout << endl;
  }
  return 0;
}