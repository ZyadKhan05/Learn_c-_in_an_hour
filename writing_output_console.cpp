#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
// Writing Output to Console:
    int x = 10;
    // We want to print x = 10
    // std::cout represents the Standard Output Stream
    // << represents Stream Insertion Operator

    std::cout << "x = " ;
    std::cout << x;
    // How to combine these statements:
     std::cout << "x = " << x;
    // Declare second output
   int y = 20;
    std::cout << "y = " << y; // Issue - Not new line

    std::cout << "x = " << x << std::endl
              << "y = " << y;

    // Simplify this code:
    // use namespace std; on the top of the page about the int main()

    cout << "x = " << x << endl
              << "y = " << y;
    return 0;
}
