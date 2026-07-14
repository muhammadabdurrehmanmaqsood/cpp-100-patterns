/* * Pattern: Square Reverse Zig-Zag Number Pattern
 * Output:
 * 5 6 15 16 25
 * 4 7 14 17 24
 * 3 8 13 18 23
 * 2 9 12 19 22
 * 1 10 11 20 21
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  int value1, value2;

  for (int row = 1; row <= totalrows; row++) {
    value1 = row;
    value2 = totalrows - row + 1;
    for (int col = 1; col <= totalrows; col++) {
      if (col % 2 == 0) {
        cout << value1 << " ";
      } else {
        cout << value2 << " ";
      }
      value1 = value1 + totalrows;
      value2 = value2 + totalrows;
    }
    cout << endl;
  }
  return 0;
}