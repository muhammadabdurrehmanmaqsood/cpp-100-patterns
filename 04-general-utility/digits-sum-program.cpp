/* * Pattern: Sum of Digits Program
 * Output: Sum of digits of a number
 */
#include <iostream>
using namespace std;

int main() {
  int num, digit, sum = 0;

  cout << "Enter a number: ";
  cin >> num;

  while (num > 0) {
    digit = num % 10;
    sum = sum + digit;
    num = num / 10;
  }
  cout << "Sum of digits of given number: " << sum << endl;
  return 0;
}