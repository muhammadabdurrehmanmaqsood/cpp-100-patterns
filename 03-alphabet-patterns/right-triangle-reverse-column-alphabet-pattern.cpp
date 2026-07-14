/* * Pattern: Right Triangle Reverse Column Alphabet Pattern
 * Output:
 * A
 * B A
 * C B A
 * D C B A
 * E D C B A
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = row; col >= 0; col--) {
      cout << char(col + 65) << " ";
    }
    cout << endl;
  }
  return 0;
}