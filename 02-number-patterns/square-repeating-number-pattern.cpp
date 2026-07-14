/* * Pattern: Square Repeating Number Pattern
 * Output:
 * 12345
 * 12345
 * 12345
 * 12345
 * 12345
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col < totalrows; col++) {
      cout << col + 1;
    }
    cout << endl;
  }
  return 0;
}