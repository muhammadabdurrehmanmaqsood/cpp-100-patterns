/* * Pattern: Inverted Right Triangle Reverse Row Number Pattern
 * Output:
 * 5 5 5 5 5
 * 4 4 4 4
 * 3 3 3
 * 2 2
 * 1
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = totalrows; row >= 1; row--) {
    for (int col = 1; col <= row; col++) {
      cout << row << " ";
    }
    cout << endl;
  }
  return 0;
}