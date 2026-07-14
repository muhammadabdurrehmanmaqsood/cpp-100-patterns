/* * Pattern: Power of a Number Program
 * Output: Power of a given number
 */
#include <iostream>
using namespace std;

int main() {
  int num, power, i = 1;
  long int sum = 1;

  cout << "Enter a number: ";
  cin >> num;
  cout << "Enter power: ";
  cin >> power;
  while (i <= power) {
    sum = sum * num;
    i++;
  }
  cout << num << " to the power " << power << " is; " << sum;
  return 0;
}