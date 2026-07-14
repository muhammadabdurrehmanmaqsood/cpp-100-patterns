/* * Pattern: Right Triangle Alphabet Column Pattern
 * Output:
 * A
 * A B
 * A B C
 * A B C D
 * A B C D E
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  char row, col;
  for (int row = 'A'; row <= 'E'; row++) {
    for (int col = 'A'; col <= row; col++) {
      cout << char(col) << " ";
    }
    cout << endl;
  }
  return 0;
}