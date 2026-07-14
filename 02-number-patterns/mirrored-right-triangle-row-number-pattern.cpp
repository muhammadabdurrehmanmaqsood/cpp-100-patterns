/* * Pattern: Mirrored Right Triangle Row Number Pattern
 * Output:
 *      1
 *     22
 *    333
 *   4444
 *  55555
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = totalrows - 1; col >= row; col--) {
      cout << " ";
    }
    for (int k = 1; k <= row; k++) {
      cout << row;
    }
    cout << endl;
  }
  return 0;
}