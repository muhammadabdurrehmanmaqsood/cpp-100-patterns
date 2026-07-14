/* * Pattern: Prime Numbers List Program
 * Output: Prime numbers between 1 to given number
 */
#include <iostream>
using namespace std;

int main() {
  int n, cn, count;

  cout << "Enter a number: ";
  cin >> n;
  cout << "List of prime numbers between 1 to " << n << " is given by: \n";

  for (int i = 1; i <= n; i++) {
    cn = i;
    count = 0;
    for (int j = 1; j <= cn; j++) {
      if (cn % j == 0) {
        count++;
      }
    }
    if (count == 2) {
      cout << cn << endl;
    }
  }
  return 0;
}