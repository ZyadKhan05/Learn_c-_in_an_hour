#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
      // Initialize Variables
    double price = 9.99;
    float interestRate = 3.67F; // Need the F/f suffix at the end of the float
    long fileSize = 90000L; // Needs the L/l suffix at the end of the long
    char letter = 'a';
    bool isValid = false; // Can be set to true or false;
    auto isNotValid = true; // Auto: The compiler automatically recognizes the data type - but you need the suffix at the end of the file size

    // Brace initialization
    int number {1};
    cout << number;
  
    return 0;
}
