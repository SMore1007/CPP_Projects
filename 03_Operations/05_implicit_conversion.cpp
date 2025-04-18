/*
Implicit Conversion from Smaller to Larger Data Types possible, if
we do it larger to smaller data type may posiblity to loss a data

*/

#include <iostream>
using namespace std;

int main() {
    // Implicit conversion from int to double
    int integerValue = 5;
    double doubleValue = integerValue; // int is implicitly converted to double
    cout << "Implicit Conversion (int to double): " << doubleValue << endl;

    // Implicit conversion in arithmetic operation
    float floatValue = 3.5;
    double result = integerValue + floatValue; // int and float are implicitly converted to double
    cout << "Implicit Conversion (int + float to double): " << result << endl;

    return 0;
}
