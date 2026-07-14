/* * Pattern: Mirrored Right Triangle Decreasing Start Number Pattern
 * Output:
 *      5
 *     45
 *    345
 *   2345
 *  12345
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = totalrows; row >= 1; row--) {
    for (int col = 1; col <= totalrows; col++) {
      if (row <= col) {
        cout << col;
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}