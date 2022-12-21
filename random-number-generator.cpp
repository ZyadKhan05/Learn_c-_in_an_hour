#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
//Generating random numbers
    //import cstdlib standard library
    int number1 = rand();
    cout << number1;
    // With this number, we get the same value everytime we print

    srand(6);
    int number2 = rand();
    cout << number2;
    // The seed only changes the number, which is still the same number

    // import <ctime>
    long elapsedSeconds = time(0); // Jan 1 1970
   srand(elapsedSeconds);
    // or srand(time(0));
    int number3 = rand() % 10;
    cout << number3;
  // This is random
    return 0;
}
