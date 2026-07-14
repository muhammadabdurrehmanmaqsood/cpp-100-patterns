/* * Pattern: Square Reverse Row Number Pattern
 * Output:
 * 55555
 * 44444
 * 33333
 * 22222
 * 11111
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = totalrows; row > 0; row--) {
    for (int col = 0; col < totalrows; col++) {
      cout << row;
    }
    cout << endl;
  }
  return 0;
}