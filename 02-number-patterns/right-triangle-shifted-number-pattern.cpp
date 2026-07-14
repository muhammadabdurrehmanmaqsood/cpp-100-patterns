/* * Pattern: Right Triangle Shifted Number Pattern
 * Output:
 * 1
 * 2 3
 * 3 4 5
 * 4 5 6 7
 * 5 6 7 8 9
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= row; col++) {
      cout << (row + col - 1) << " ";
    }
    cout << endl;
  }
  return 0;
}