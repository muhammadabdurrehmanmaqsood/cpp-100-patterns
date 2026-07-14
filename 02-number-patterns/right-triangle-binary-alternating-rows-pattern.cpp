/* * Pattern: Right Triangle Binary Alternating Rows Pattern
 * Output:
 * 0
 * 1 1
 * 0 0 0
 * 1 1 1 1
 * 0 0 0 0 0
 * 1 1 1 1 1 1
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 6;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col <= row; col++) {
      cout << (row % 2) << " ";
    }
    cout << endl;
  }
  return 0;
}