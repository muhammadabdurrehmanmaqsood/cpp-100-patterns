/* * Pattern: Square Alphabet Row Pattern
 * Output:
 * A A A A A
 * B B B B B
 * C C C C C
 * D D D D D
 * E E E E E
 */
#include <iostream>
using namespace std;

int main() {
  char row, col;
  for (int row = 'A'; row <= 'E'; row++) {
    for (int col = 'A'; col <= 'E'; col++) {
      cout << char(row) << " ";
    }
    cout << endl;
  }
  return 0;
}