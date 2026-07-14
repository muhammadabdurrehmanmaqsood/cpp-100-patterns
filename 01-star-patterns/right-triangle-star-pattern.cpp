/* * Pattern: Right Triangle Star Pattern
 * Output:
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 */                                                                            \
#include<iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}