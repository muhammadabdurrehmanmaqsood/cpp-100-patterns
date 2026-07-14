/* * Pattern: Square Sequential Number Pattern
 * Output:
 * 1 2 3 4 5
 * 6 7 8 9 10
 * 11 12 13 14 15
 * 16 17 18 19 20
 * 21 22 23 24 25
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  int value = 1;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col < totalrows; col++) {
      cout << value++ << " ";
    }
    cout << endl;
  }
  return 0;
}