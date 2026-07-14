/* * Pattern: Right Triangle Alphabet Row Pattern
 * Output:
 * *A
 * B B
 * C C C
 * D D D D
 * E E E E E
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  char row, col;
  for (int row = 'A'; row <= 'E'; row++) {
    for (int col = 'A'; col <= row; col++) {
      cout << char(row) << " ";
    }
    cout << endl;
  }
  return 0;
}