#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Basic Tutorial:
    // std::cout << "Hello World"; // Print Statement
    // return 0; // 0 tells the operating system that the program will terminate correctly

    // Variables tutorial
//    int file_size = 0 ; // Use meaningful for variable names - No abbreviated names and make it something that someone would know what it is
//    int counter = 0;
//    double sales = 9.99;
//    std::cout << file_size; // Statement
//    return 0;

    // Exercise - Write code to swap the value of two variables
//    int a = 1;
//    int b = 2;
//    int temp = a;
//    a = b;
//    b = temp;
//    std::cout << a;
//    return 0;

    // Constants
//    const double pi = 3.14; // Prevents us from modifying this variable value
//    std::cout << pi;
//    return 0;

    // Naming Conventions
//    int file_size; // Snake Case - lowercase letters to name our variables & constants, if we have multiple words separate them with underscore
//    int FileSize; // Pascal Case
//    int fileSize; // Camel Case
//    int iFileSize; // Hungarian Notation - Use the file type in the front of the variable/constant
//    return 0;

    // Mathematical Expressions
//    int x = 10;
//    int y = 3;
//    double division = 10;
//    int q = x + y; // Addition
//    int w = x - y; // Subtraction
//    int e = x * y; // Multiplication
//    double r = division / y; // Division - One of the variables must be a double for division to work
//    int t = x % y; // Modulus
//    x++; // Increment Operator
//    x--; // Decrement Operator
//    std::cout << r;
//    std::cout << t;
//    int z = x++; // x = 11, z = 10
//    int z = ++x; // x = 11, z = 11
//    std::cout << z;
//    return 0;

    // Order of Operators
    // * and / operators have higher order than + and -
    // You can use parentheses to change this
//    double x = 1 + 2 * 3; // Prints out 7: (2*3) first then adds on 1
//    double x = (1+2) * 3; // Prints out 9: (1+2) then times 3
//    std::cout << x;
//    return 0;

    // Order of Operators - Exercise:
//    double x = 10;
//    double y = 5;
//    double z = (x+10) / (3*y);
//    std::cout << z;
//    return 0;

    // Writing Output to Console:
//    int x = 10;
    // We want to print x = 10
    // std::cout represents the Standard Output Stream
    // << represents Stream Insertion Operator

//    std::cout << "x = " ;
//    std::cout << x;
    // How to combine these statements:
//     std::cout << "x = " << x;
    // Declare second output
//    int y = 20;
//    std::cout << "y = " << y; // Issue - Not new line

//    std::cout << "x = " << x << std::endl
//              << "y = " << y;

    // Simplify this code:
    // use namespace std; on the top of the page about the int main()

//    cout << "x = " << x << endl
//              << "y = " << y;
//    return 0;

    // Exercise - Writing Output to Console:
//    int Sales = 95000; // Sales = $95,000
//    cout << "The total sales that you made is: $" << Sales << endl;
//    const double stateTaxRate = 0.04; // State Tax = 4%
//    double stateTax = stateTaxRate * Sales;
//    cout << "The state tax that you have to pay is: $" << (stateTax) << endl;
//    const double countyTaxRate = 0.02; // County Tax = 2%
//    double countyTax = countyTaxRate * Sales;
//    cout << "The County tax that you have to pay is: $" << (countyTax) << endl;
//
//    double totalTax = countyTax + stateTax;
//    cout << "The total tax that you have to pay is: $" << totalTax;
//
//    return 0;

    // Reading from the Console
//    cout << "Enter a value: " << endl;
//    int value;
//    double valueDouble;
//    cin >> valueDouble; // Stream Extraction operator
//    cout << "Your value is: " <<  valueDouble;

    // Enter in values for 2 or more variables
//    cout << "Enter two values for x and y: " << endl;
//    double x;
//    double y;

//    cin >> x;
//    cin >> y;
    // Simplify
//    cin >> x >> y;
//    cout << "Your value for x is: " <<  x << " and your value for y is: " << y << endl;
//    cout << "The value for x + y is: " << x+y;
//    return 0;

    // Exercise - Write a program to convert a temperature from Fahrenheit to Celsius.
//    cout << "Enter in a temperature in Fahrenheit: " << endl;
//    double temperatureFahrenheit;
//    cin >> temperatureFahrenheit;
//    double temperatureCelsius = (temperatureFahrenheit - 32) / 1.8;
//    cout << "The temperature " << temperatureFahrenheit  << " degrees Fahrenheit is " << temperatureCelsius <<  " degrees Celsius.";
//    return 0;

    // Working with the Standard Library
    // Import <cmath> library on the top of the code
//    double result = floor(1.2) ; // Floor function
//    double result = pow(2, 3); // Power
//    cout << result;
//    return 0;

    // Exercise - Write a program to calculate the area of a circle by using the radius of the circle
//    cout << "Enter in the radius of the circle" << endl;
//    double radius;
//    cin >> radius;
//    const double pi = 3.14;
//    double area = pi * pow(radius, 2);
//    cout << "The area of the circle is " << area ;
//    return 0;

    // Comments
    // Comment  - First type of comment: can be added to the side of a line, but is more conventional to put on top
    /*
     Comment - Second type of comment
     */

    // Do not over use comments - only use to explain whys and hows

    // Fundamental Data Types
        // Type: short - Bytes: 2 - Range: -32,768 to 32,767
        // Type: int - Byes: 4 - Range: -2B to 2B
        // Type: long - Bytes: 4 - Range: -2B to 2B
        // Type: long long - Bytes: 8 - Range:

        // Type: float - Bytes: 4 - Range: -3.4E38 to 3.4E38
        // Type: double - Bytes: 8 - Range: -1.7E308 to 1.7E308
        // Type: long double - Bytes: 8 - Range: -3.4E932 to 1.7E4832

        // Type: bool - Bytes: 1 - Range: true/false
        // Type: char - Bytes: 1 - Range:

    // Initialize Variables
//    double price = 9.99;
//    float interestRate = 3.67F; // Need the F/f suffix at the end of the float
//    long fileSize = 90000L; // Needs the L/l suffix at the end of the long
//    char letter = 'a';
//    bool isValid = false; // Can be set to true or false;
//    auto isNotValid = true; // Auto: The compiler automatically recognizes the data type - but you need the suffix at the end of the file size

    // Brace initialization
//    int number {1};
//    cout << number;
//
//    return 0;

    // Working with Numbers
//    int number = 0b11111111;
//    int number = 0xff;
//    int number = 255;
//    int number = -255;
//    cout << number;
//    return 0;

    // Narrowing
//    short number = 100;
//    int another{number};
//    cout << another;
//    return 0;

    // Generating random numbers
    // import cstdlib standard library
//    int number = rand();
//    cout << number;
    // With this number, we get the same value everytime we print

//    srand(6);
//    int number = rand();
//    cout << number;
    // The seed only changes the number, which is still the same number

    // import <ctime>
//    long elapsedSeconds = time(0); // Jan 1 1970
//    srand(elapsedSeconds);
    // or srand(time(0));
//    int number = rand() % 10;
//    cout << number;
//    return 0;

    // Exercise: Write a program for rolling dice.
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(0));
    short first = (rand() % (maxValue - minValue + minValue)) + minValue ;
    short second = (rand() % (maxValue - minValue + minValue)) + minValue ;
    cout << first << ", " << second;
    return 0;
}