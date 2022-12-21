#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Exercise - Write a program to convert a temperature from Fahrenheit to Celsius.
    cout << "Enter in a temperature in Fahrenheit: " << endl;
    double temperatureFahrenheit;
    cin >> temperatureFahrenheit;
    double temperatureCelsius = (temperatureFahrenheit - 32) / 1.8;
    cout << "The temperature " << temperatureFahrenheit  << " degrees Fahrenheit is " << temperatureCelsius <<  " degrees Celsius.";
    return 0;

}
