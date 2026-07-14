/* * Pattern: Square Reverse Column Sequential Alphabet Pattern
 * Output:
 * E J O T Y
 * D I N S X
 * C H M R W
 * B G L Q V
 * A F K P U
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5, x;

  for (int row = totalrows - 1; row >= 0; row--) {
    x = row;
    for (int col = 0; col < totalrows; col++) {
      x += totalrows;
      cout << char(x - totalrows + 65) << " ";
    }
    cout << endl;
  }
  return 0;
}