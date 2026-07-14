/* * Pattern: Square Inverse Binary Alternating Pattern
 * Output:
 * 1 0 1 0 1
 * 0 1 0 1 0
 * 1 0 1 0 1
 * 0 1 0 1 0
 * 1 0 1 0 1
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= totalrows; col++) {
      cout << (row + col) % 2 << " ";
    }
    cout << endl;
  }
  return 0;
}