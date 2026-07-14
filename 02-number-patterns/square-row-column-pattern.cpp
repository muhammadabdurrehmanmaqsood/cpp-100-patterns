/* * Pattern: Square  Row Column Number Pattern
 * Output:
 * 1 1 1 2 1 3
 * 2 1 2 2 2 3
 * 3 1 3 2 3 3
 * 4 1 4 2 4 3
 * 5 1 5 2 5 3
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col < totalrows - 2; col++) {
      cout << col + 1 << " " << row + 1 << " ";
    }
    cout << endl;
  }
  return 0;
}