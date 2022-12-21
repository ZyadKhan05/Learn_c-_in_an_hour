#include <iostream>

int main() {
      // Order of Operators
    // * and / operators have higher order than + and -
    // You can use parentheses to change this
    double x = 1 + 2 * 3; // Prints out 7: (2*3) first then adds on 1
    double x = (1+2) * 3; // Prints out 9: (1+2) then times 3
    std::cout << x;
    return 0;
}
