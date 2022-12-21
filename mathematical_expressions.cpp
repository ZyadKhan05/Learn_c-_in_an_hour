#include <iostream>

int main() {
    // Mathematical Expressions
    int x = 10;
    int y = 3;
    double division = 10;
    int q = x + y; // Addition
    int w = x - y; // Subtraction
    int e = x * y; // Multiplication
    double r = division / y; // Division - One of the variables must be a double for division to work
    int t = x % y; // Modulus
    x++; // Increment Operator
    x--; // Decrement Operator
    std::cout << r;
    std::cout << t;
    int z = x++; // x = 11, z = 10
    int z = ++x; // x = 11, z = 11
    std::cout << z;
    return 0;
}
