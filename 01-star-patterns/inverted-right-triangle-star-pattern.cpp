/* * Pattern: Inverted Right Triangle Star Pattern
 * Output:
 *  * * * * *
 *  * * * *
 *  * * *
 *  * *
 *  *
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = totalrows; row > 0; row--) {
    for (int col = 1; col <= row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}