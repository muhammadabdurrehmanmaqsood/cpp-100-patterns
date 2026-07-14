/* * Pattern: Right Triangle Binary Alternating Pattern
 * Output:
 * 0
 * 1 0
 * 0 1 0
 * 1 0 1 0
 * 0 1 0 1 0
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= row; col++) {
      cout << ((row + col) % 2) << " ";
    }
    cout << endl;
  }
  return 0;
}