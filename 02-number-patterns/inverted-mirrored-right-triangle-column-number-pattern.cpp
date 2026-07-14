/* * Pattern: Inverted Mirrored Right Triangle Column Number Pattern
 * Output:
 *  12345
 *   1234
 *    123
 *     12
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
    for (int value = 1; value <= row; value++) {
      cout << value;
    }
    cout << endl;
  }
  return 0;
}