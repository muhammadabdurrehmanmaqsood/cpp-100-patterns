/* * Pattern: Swap Two Numbers Program
 * Output: Swap the values of two variables with the help of temporary variable
 */
#include <iostream>
using namespace std;

int main() {
  int var1, var2, temp;
  cout << "Enter the values of var1 and var2:\n";
  cin >> var1 >> var2;
  cout << "Before swaping:\n var1 = " << var1 << "\n var2 = " << var2 << endl;
  temp = var1;
  var1 = var2;
  var2 = temp;
  cout << "After swaping:\n var1 = " << var1 << "\n var2 = " << var2 << endl;
  return 0;
}