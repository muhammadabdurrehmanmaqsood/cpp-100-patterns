/* * Pattern: Square Star Pattern
 * Output:
 * *****
 * *****
 * *****
 * *****
 * *****
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col < totalrows; col++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}