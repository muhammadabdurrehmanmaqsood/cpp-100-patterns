/* * Pattern: Celsius to Fahrenheit Conversion Program
 * Output: Celsius to Fahrenheit conversion
 */
#include <iostream>
using namespace std;

int main() {
  float celsius, fahrenheit;
  cout << "Enter temperature in Celsius: ";
  cin >> celsius;

  fahrenheit = (1.8 * celsius) + 32;
  cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
  return 0;
}