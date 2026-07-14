/* * Pattern: Fahrenheit to Celsius Conversion Program
 * Output: Fahrenheit to Celsius conversion
 */
#include <iostream>
using namespace std;

int main() {
  float celsius, fahrenheit;
  cout << "Enter temperature in Fahrenheit: ";
  cin >> fahrenheit;

  celsius = (fahrenheit - 32) / 1.8;
  cout << "Temperature in Celsius: " << celsius << endl;
  return 0;
}