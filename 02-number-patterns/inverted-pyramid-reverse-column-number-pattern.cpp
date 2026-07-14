/* * Pattern: Inverted Pyramid Reverse Column Number Pattern
 * Output:
 *  5 4 3 2 1
 *   4 3 2 1
 *    3 2 1
 *     2 1
 *      1
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = totalrows; row >= 1; row--) {
    for (int col = totalrows - 1; col >= row; col--) {
      cout << " ";
    }
    for (int k = row; k >= 1; k--) {
      cout << " " << k;
    }
    cout << endl;
  }
  return 0;
}