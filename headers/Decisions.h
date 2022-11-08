// include pre-processor directives
#include <iostream>
#include <iomanip>

#define NUM 34568.80

// use C++ standard library namespace
using namespace std;

// this finction will use the comparison operators,
// and the if, if-else, if-else-if statements
void decisions1(void){
    // declare a variable of type float
    // initialize it using constant defined in header file
    float num = NUM;

    // show decimal point and trailing zeros on the output stream object
    cout << fixed << showpoint;
    // shoe threee digits to the right of the decimal on the ouput stream object
    cout << setprecision(3);

    // use if statement
    if (num < 40000.0) {
        cout << "Num " << num << " is less than 40000.0." << endl; // display
    }

    num += num;

    // use if-else statement
    if (num < 40000.0) {
        cout << "Num " << num <<  " is less than 40000.0." << endl; // not displayed
    } else {
        cout << "Num " << num << " is not less than 40000.0." << endl; // displayed
    }

    num = 0.0;

    // use if-else-if statement
    if (num < 0.0) {
        cout << "Num " << num << " is equal to 0.0" << endl; // displayed
    } else if (num < 40000.0) {
        cout << "Num " << num << " is less than 40000.0." << endl; // not displayed
    } else {
        cout << "Num " << num << " is not less than 40000.0." << endl; // not displayed
    }
}