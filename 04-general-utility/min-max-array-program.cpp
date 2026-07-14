/* * Pattern: Minimum and Maximum in an Array Program
 * Output: Find the largest and smallest number in an array
 */
#include <climits>
#include <iostream>

using namespace std;

int main() {
  int size;
  cout << "Enter size of array: ";
  cin >> size;
  int array[size];
  cout << "Enter " << size << " elements of array:";
  for (int pointer = 0; pointer < size; pointer++) {
    cin >> array[pointer];
  }

  int smallest = INT_MAX;
  int largest = INT_MIN;

  for (int pointer = 0; pointer < size; pointer++) {
    smallest = min(array[pointer], smallest);
    largest = max(array[pointer], largest);
  }
  cout << "Largest is: " << largest << endl;
  cout << "Smallest is: " << smallest << endl;
  return 0;
}