/* * Pattern: Area of Triangle Program
 * Output: Area of a triangle
 */
#include <iostream>
using namespace std;

// Area of triangle program
int main() {
  float base, height, area;
  cout << "Enter the values of base and height of triangle: \n";
  cin >> base >> height;

  area = (base * height) / 2;
  cout << "Area of triangle is: " << area << endl;
  return 0;
}