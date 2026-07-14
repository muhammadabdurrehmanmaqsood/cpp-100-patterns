/* * Pattern: Solid Pyramid Row Number Pattern
 * Output:
 *      1
 *     222
 *    33333
 *   4444444
 *  555555555
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
    for (int l = 1; l < row; l++) {
      cout << row;
    }
    cout << endl;
  }
  return 0;
}