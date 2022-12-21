#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
// Exercise - Writing Output to Console:
   int Sales = 95000; // Sales = $95,000
    cout << "The total sales that you made is: $" << Sales << endl;
    const double stateTaxRate = 0.04; // State Tax = 4%
    double stateTax = stateTaxRate * Sales;
    cout << "The state tax that you have to pay is: $" << (stateTax) << endl;
    const double countyTaxRate = 0.02; // County Tax = 2%
    double countyTax = countyTaxRate * Sales;
    cout << "The County tax that you have to pay is: $" << (countyTax) << endl;

    double totalTax = countyTax + stateTax;
    cout << "The total tax that you have to pay is: $" << totalTax;

    return 0;
}
