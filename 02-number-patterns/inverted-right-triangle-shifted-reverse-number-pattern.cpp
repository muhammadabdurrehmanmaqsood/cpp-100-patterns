/* * Pattern: Inverted Right Triangle Shifted Reverse Number Pattern
 * Output:
 * 5 4 3 2 1
 * 6 5 4 3
 * 7 6 5
 * 8 7
 * 9
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = totalrows; col > row; col--) {
      cout << row + col << " ";
    }
    cout << endl;
  }
  return 0;
}