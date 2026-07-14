/* * Pattern: Even Odd Program
 * Output: Is number Even or Odd
 */
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (num % 2 == 0) {
    cout << "The given number is Even.\n";
  } else {
    cout << "The given number is Odd.\n";
  }
  return 0;
}