/* * Pattern: Mirrored Right Triangle Decreasing Start Alphabet Pattern
 * Output:
 *      E
 *     DE
 *    CDE
 *   BCDE
 *  ABCDE
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