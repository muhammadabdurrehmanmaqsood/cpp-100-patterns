/* * Pattern: Mirrored Right Triangle Reverse Row Number Pattern
 * Output:
 *      5
 *     44
 *    333
 *   2222
 *  11111
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = totalrows; row >= 1; row--) {
    for (int col = 1; col <= totalrows; col++) {
      if (row <= col) {
        cout << row;
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}