/* * Pattern: Mirrored Right Triangle Reverse Alphabet Row Pattern
 * Output:
 *      E
 *     DD
 *    CCC
 *   BBBB
 *  AAAAA
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = totalrows; row >= 1; row--) {
    for (int col = row; col >= 1; col--) {
      cout << " ";
    }
    for (int value = row; value <= totalrows; value++) {
      cout << char(value + 64);
    }
    cout << endl;
  }
  return 0;
}