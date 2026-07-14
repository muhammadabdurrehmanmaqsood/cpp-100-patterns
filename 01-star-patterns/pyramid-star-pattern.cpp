/* * Pattern: Pyramid Star Pattern
 * Output:
 *      *
 *     * *
 *    * * *
 *   * * * *
 *  * * * * *
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
      cout << " *";
    }
    cout << endl;
  }
  return 0;
}