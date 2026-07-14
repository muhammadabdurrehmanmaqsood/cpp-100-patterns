/* * Pattern: Right Triangle Reverse Alphabet Row Pattern
 * Output:
 * E
 * D D
 * C C C
 * B B B B
 * A A A A A
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  char row, col;
  for (int row = 'E'; row >= 'A'; row--) {
    for (int col = 'E'; col >= row; col--) {
      cout << char(col) << " ";
    }
    cout << endl;
  }
  return 0;
}