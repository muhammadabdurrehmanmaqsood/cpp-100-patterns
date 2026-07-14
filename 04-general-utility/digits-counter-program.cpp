/* * Pattern: Count Digits in a Number Program
 * Output: Count digits in a number
 */
#include <iostream>
using namespace std;

int main() {
  int num, count = 0;

  cout << "Enter a number: ";
  cin >> num;

  while (num) {
    num = num / 10;
    count++;
  }
  cout << "Total digits: " << count << endl;
  return 0;
}