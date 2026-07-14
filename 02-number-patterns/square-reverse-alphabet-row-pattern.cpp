/* * Pattern: Sqaure Reverse Alphabet Row Pattern
 * Output:
 * E E E E E
 * D D D D D
 * C C C C C
 * B B B B B
 * A A A A A
 */
#include <iostream>
using namespace std;

int main() {
  char row, col;
  for (int row = 'E'; row >= 'A'; row--) {
    for (int col = 'E'; col >= 'A'; col--) {
      cout << char(row) << " ";
    }
    cout << endl;
  }
  return 0;
}