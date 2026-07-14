/* * Pattern: Square Binary Alternating Rows Pattern
 * Output:
 * 0 0 0 0 0
 * 1 1 1 1 1
 * 0 0 0 0 0
 * 1 1 1 1 1
 * 0 0 0 0 0
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 1; col <= totalrows; col++) {
      cout << (row % 2) << " ";
    }
    cout << endl;
  }
  return 0;
}