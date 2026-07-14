/* * Pattern: Square Diagonal Number Pattern
 * Output:
 * 1 2 3 4 5
 * 2 3 4 5 6
 * 3 4 5 6 7
 * 4 5 6 7 8
 * 5 6 7 8 9
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col < totalrows; col++) {
      cout << (row + col + 1) << " ";
    }
    cout << endl;
  }
  return 0;
}