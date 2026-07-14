/* * Pattern:
 * Output:
 * 2
 * 2 4
 * 2 4 6
 * 2 4 6 8
 * 2 4 6 8 10
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= row; col++) {
      cout << col * 2 << " ";
    }
    cout << endl;
  }
  return 0;
}