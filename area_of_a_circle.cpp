#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
// Exercise - Write a program that asks the user for the radius of a circle, and provides the area of that circle
    cout << "Enter in the radius of the circle" << endl;
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << "The area of the circle is " << area ;
    return 0;
}
