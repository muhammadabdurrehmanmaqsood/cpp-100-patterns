/* * Pattern: Mirrored Right Triangle Reverse Column Alphabet Pattern
 * Output:
 *      A
 *     BA
 *    CBA
 *   DCBA
 *  EDCBA
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col <= totalrows - row - 1; col++) {
      cout << " ";
    }
    for (int value = row; value >= 0; value--) {
      cout << char(value + 65);
    }
    cout << endl;
  }
  return 0;
}