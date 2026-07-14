/* * Pattern: Inverted Right Triangle Row Number Pattern
 * Output:
 * 1 1 1 1 1
 * 2 2 2 2
 * 3 3 3
 * 4 4
 * 5
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = totalrows; col >= row; col--) {
      cout << row << " ";
    }
    cout << endl;
  }
  return 0;
}