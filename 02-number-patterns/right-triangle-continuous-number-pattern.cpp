/* * Pattern: Right Triangle Continuous Number Pattern OR Floyd's Triangle
 * Pattern
 * Output:
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 4, p = 1;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= row; col++) {
      cout << p << " ";
      p++;
    }
    cout << endl;
  }
  return 0;
}