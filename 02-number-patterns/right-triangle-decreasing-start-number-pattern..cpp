/* * Pattern: Right Triangle Decreasing Start Number Pattern
 * Output:
 * 5
 * 4 5
 * 3 4 5
 * 2 3 4 5
 * 1 2 3 4 5
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = totalrows; row >= 1; row--) {
    for (int col = row; col <= totalrows; col++) {
      cout << col << " ";
    }
    cout << endl;
  }
  return 0;
}