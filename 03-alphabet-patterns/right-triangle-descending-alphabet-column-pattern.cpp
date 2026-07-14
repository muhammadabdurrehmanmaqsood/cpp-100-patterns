/* * Pattern: Right Triangle Descending Alphabet Column Pattern
 * Output:
 * E
 * E D
 * E D C
 * E D C B
 * E D C B A
 */                                                                            \
#include<iostream>
using namespace std;

// PatternPrograms67
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