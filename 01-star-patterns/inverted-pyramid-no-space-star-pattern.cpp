/* * Pattern: Inverted Pyramid Star Pattern
 * Output:
 *  *********
 *   *******
 *    *****
 *     ***
 *      *
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;
  for (int row = totalrows; row >= 1; row--) {
    for (int col = totalrows - 1; col >= row; col--) {
      cout << " ";
    }
    for (int k = row; k >= 1; k--) {
      cout << "*";
    }
    for (int l = row - 1; l >= 1; l--) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}