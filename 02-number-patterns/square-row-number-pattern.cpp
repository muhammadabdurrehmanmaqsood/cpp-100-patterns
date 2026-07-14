/* * Pattern: Square Row Number Pattern
 * Output:
 * 11111
 * 22222
 * 33333
 * 44444
 * 55555
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col < totalrows; col++) {
      cout << row + 1;
    }
    cout << endl;
  }
  return 0;
}