/* * Pattern: Square Column Sequential Alphabet Pattern
 * Output:
 * A F K P U
 * B G L Q V
 * C H M R W
 * D I N S X
 * E J O T Y
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5, x;

  for (int row = 0; row < totalrows; row++) {
    x = row;
    for (int col = 0; col < totalrows; col++) {
      x += totalrows;
      cout << char(x - totalrows + 65) << " ";
    }
    cout << endl;
  }
  return 0;
}