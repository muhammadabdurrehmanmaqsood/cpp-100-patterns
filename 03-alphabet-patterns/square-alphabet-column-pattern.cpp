/* * Pattern: Square Alphabet Column Pattern
 * Output:
 * A B C D E
 * A B C D E
 * A B C D E
 * A B C D E
 * A B C D E
 */
#include <iostream>
using namespace std;

int main() {
  char row, col;
  for (int row = 'A'; row <= 'E'; row++) {
    for (int col = 'A'; col <= 'E'; col++) {
      cout << char(col) << " ";
    }
    cout << endl;
  }
  return 0;
}