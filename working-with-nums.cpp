#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
     // Working with Numbers
    int number = 0b11111111;
    int number = 0xff;
    int number = 255;
    int number = -255;
    cout << number;
    return 0;

    // Narrowing
    short narrow = 100;
    int another{narrow};
    cout << another;
    return 0;
}
