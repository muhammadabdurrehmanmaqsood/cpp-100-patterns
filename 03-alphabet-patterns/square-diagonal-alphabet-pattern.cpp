/* * Pattern: Square Diagonal Alphabet Pattern
 * Output:
 * A B C D E
 * B C D E F
 * C D E F G
 * D E F G H
 * E F G H I
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col < totalrows; col++) {
      cout << char(row + col + 65) << " ";
    }
    cout << endl;
  }
  return 0;
}