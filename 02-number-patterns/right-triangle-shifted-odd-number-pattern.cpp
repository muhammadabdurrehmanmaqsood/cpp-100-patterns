/* * Pattern: Right Triangle Shifted Odd Number Pattern
 * Output:
 * 1
 * 3 5
 * 5 7 9
 * 7 9 11 13
 * 9 11 13 15 17
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5, p;

  for (int row = 1; row <= totalrows; row++) {
    p = row - 1;
    for (int col = 1; col <= row; col++) {
      cout << (p + col * 2) << " ";
      p += 2;
    }
    cout << endl;
  }
  return 0;
}