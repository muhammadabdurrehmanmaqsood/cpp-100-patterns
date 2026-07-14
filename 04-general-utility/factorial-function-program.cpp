/* * Pattern: Factorial Function Program
 * Output: Factorial of a given number
 */
#include <iostream>
using namespace std;

long int factorial(int num) {
  if (num <= 1) {
    return (1);
  } else {
    num = num * factorial(num - 1);
    return (num);
  }
}
int main() {
  int num;

  cout << "Enter a number: ";
  cin >> num;

  cout << "Factorial of " << num << " is: " << factorial(num) << endl;
}