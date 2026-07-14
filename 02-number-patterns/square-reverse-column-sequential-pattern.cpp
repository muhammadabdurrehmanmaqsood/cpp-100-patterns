/* * Pattern: Square Reverse Column Sequential Pattern
 * Output:
 * 5 10 15 20 25
 * 4 9 14 19 24
 * 3 8 13 18 23
 * 2 7 12 17 22
 * 1 6 11 16 21
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  int value;

  for (int row = 0; row < totalrows; row++) {
    value = row + 1;
    for (int col = 0; col < totalrows; col++) {
      cout << value << " ";
      value += totalrows;
    }
    cout << endl;
  }
  return 0;
}