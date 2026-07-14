/* * Pattern: Inverted Right Triangle Reverse Column Number Pattern
 * Output:
 * 5 4 3 2 1
 * 5 4 3 2
 * 5 4 3
 * 5 4
 * 5
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = totalrows; col >= row; col--) {
      cout << col << " ";
    }
    cout << endl;
  }
  return 0;
}