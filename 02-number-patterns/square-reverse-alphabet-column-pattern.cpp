/* * Pattern: Square Reverse Alphabet Column Pattern
 * Output:
 * E D C B A
 * E D C B A
 * E D C B A
 * E D C B A
 * E D C B A
 */
#include <iostream>
using namespace std;

int main() {
  char row, col;
  for (int row = 'E'; row >= 'A'; row--) {
    for (int col = 'E'; col >= 'A'; col--) {
      cout << char(col) << " ";
    }
    cout << endl;
  }
  return 0;
}