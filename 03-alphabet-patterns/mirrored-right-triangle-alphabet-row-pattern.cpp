/* * Pattern: Mirrored Right Triangle Alphabet Row Pattern
 * Output:
 *      A
 *     BB
 *    CCC
 *   DDDD
 *  EEEEE
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = totalrows - 1; col > row; col--) {
      cout << " ";
    }
    for (int value = 0; value <= row; value++) {
      cout << char(row + 65);
    }
    cout << endl;
  }
  return 0;
}