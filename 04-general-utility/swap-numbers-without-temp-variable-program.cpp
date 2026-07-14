/* * Pattern: Swap Two Numbers without temporary variable Program
 * Output: Swap the values of two numbers
 */
#include <iostream>
using namespace std;

int main() {
  int var1, var2;
  cout << "Enter two values to swap:\n";
  cin >> var1 >> var2;
  cout << "Before swaping:\n var1 = " << var1 << "\n var2 = " << var2 << endl;
  var1 = var1 + var2;
  var2 = var1 - var2;
  var1 = var1 - var2;
  cout << "After swaping:\n var1 = " << var1 << "\n var2 = " << var2 << endl;
  return 0;
}