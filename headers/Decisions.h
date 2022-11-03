// include pre-processor directives
#include <iostream>

#define NUM 34568.80

// use C++ standard library namespace
using namespace std;

// this finction will use the comparison operators,
// and the if, if-else, if-else-if statements
void decisions1(void){
    // declare a variable of type float
    // initialize it using constant defined in header file
    float num = NUM;

    // use if statement
    if (num < 40000.0) {
        cout << ("Num (%.2f) is less than 40000.0.\n", num); // display
    }

    num += num;

    // use if-else statement
    if (num < 40000.0) {
        cout << ("Num (%.2f) is less than 40000.0.\n", num); // not displayed
    } else {
        cout << ("Num (%.2f) is not less than 40000.0.\n", num); // displayed
    }

    num = 0.0;

    // use if-else-if statement
    if (num < 0.0) {
        cout << ("Num (%.2f) is equal to 0.0\n", num); // displayed
    } else if (num < 40000.0) {
        cout << ("Num (%.2f) is less than 40000.0.\n", num); // not displayed
    } else {
        cout << ("Num (%.2f) is not less than 40000.0.\n", num); // not displayed
    }
}