#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
// Exercise: Write a program for rolling dice.
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(0));
    short first = (rand() % (maxValue - minValue + minValue)) + minValue ;
    short second = (rand() % (maxValue - minValue + minValue)) + minValue ;
    cout << first << ", " << second;
    return 0;
}
