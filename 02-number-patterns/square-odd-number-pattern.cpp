/* * Pattern: Square Odd Number Pattern
 * Output:
 * 1 3 5 7 9
 * 11 13 15 17 19
 * 21 23 25 27 29
 * 31 33 35 37 39
 * 41 43 45 47 49
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;
  int value = 1;

  for (int row = 0; row < totalrows; row++) {
    for (int col = 0; col < totalrows; col++) {
      cout << value << " ";
      value += 2;
    }
    cout << endl;
  }
  return 0;
}