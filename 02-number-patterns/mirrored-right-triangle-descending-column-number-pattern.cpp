/* * Pattern: Mirrored Right Triangle Descending Column Number Pattern
 * Output:
 *      1
 *     21
 *    321
 *   4321
 *  54321
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = totalrows; col >= 1; col--) {
      if (row >= col) {
        cout << col;
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}