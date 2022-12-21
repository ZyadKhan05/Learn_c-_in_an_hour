#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
 // Reading from the Console
    cout << "Enter a value: " << endl;
    int value;
    double valueDouble;
    cin >> valueDouble; // Stream Extraction operator
    cout << "Your value is: " <<  valueDouble;

    // Enter in values for 2 or more variables
    cout << "Enter two values for x and y: " << endl;
    double x;
    double y;

    cin >> x;
    cin >> y;
    // Simplify
    cin >> x >> y;
    cout << "Your value for x is: " <<  x << " and your value for y is: " << y << endl;
    cout << "The value for x + y is: " << x+y;
   return 0;
}
