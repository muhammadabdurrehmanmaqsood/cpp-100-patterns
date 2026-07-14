/* * Pattern:
 * Output:
 *      1
 *     2 2
 *    3 3 3
 *   4 4 4 4
 *  5 5 5 5 5
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
      cout << " " << row;
    }
    cout << endl;
  }
  return 0;
}