#/* * Pattern: Square Inverse Binary Grid Pattern
* Output:
* 0 1 0 1 0 
* 0 0 0 0 0 
* 0 1 0 1 0 
* 0 0 0 0 0 
* 0 1 0 1 0 
*/
#include <iostream>
using namespace std;

int main() {
  int totalrows = 5;

  for (int row = 1; row <= totalrows; row++) {
    for (int col = 0; col < totalrows; col++) {
      cout << (row * col) % 2 << " ";
    }
    cout << endl;
  }
  return 0;
}