/* * Pattern: Mirrored Right Triangle Column Number Pattern
 * Output:
 *      1
 *     12
 *    123
 *   1234
 *  12345
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
      cout << k;
    }
    cout << endl;
  }
  return 0;
}