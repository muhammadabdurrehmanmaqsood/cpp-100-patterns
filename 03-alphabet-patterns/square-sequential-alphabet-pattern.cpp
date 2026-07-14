/* * Pattern: Square Sequential Alphabet Pattern
 * Output:
 * A B C D E
 * F G H I J
 * K L M N O
 * P Q R S T
 * U V W X Y
 */
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;
  char ch = 'A';

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 1; col <= totalrows; col++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
  return 0;
}