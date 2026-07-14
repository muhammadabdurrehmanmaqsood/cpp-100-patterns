/* * Pattern: Square Reverse Repeating Number Pattern
 * Output:
 * 54321
 * 54321
 * 54321
 * 54321
 * 54321
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = totalrows; col > 0; col--) {
      cout << col;
    }
    cout << endl;
  }
  return 0;
}