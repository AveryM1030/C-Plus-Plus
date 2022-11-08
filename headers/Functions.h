// include pre-processor directives
#include <iostream>
#include <string>

// use C++ standard library namespace
using namespace std;

/* this function has 3 parameter and it also have a local variable */
void congratulate2(string student, string course, string programmer){
    // declare and initialize a local variable by calling
    // strlen function
    // the C string strlen function cannot be used on the C++ string type
    // the C++ function length must be used instead
    int days = programmer.length();

    // the C++ string type may not be formatted using the %s format specifier
    // the string type must be converted to a const char * using the c_str()
    // function before it may be formatted using the %s
    // the perferred way to putput the C++ string type is by using cout
    printf("%s has done as much %s programming as %s could fit into %d days.\n",
        student.c_str(), course.c_str(), programmer.c_str(), days);
}

/* 
 * this function has 3 parameters, all having char 
 * when you have a * in the type of a parameter, it means the
 * parameter is a pointer. Pointer refer to memory locations
 * instead of holding values. char * means the parameter refer
 * to a memory location that would a collection of characters.
 * this is how C deals with strings. there is no string type in C;
 * there is char .
*/
void congratulate1(string student, string course, string programmer){
    cout << student << " has done as much " << course << " programming as " << programmer << endl;
    // function declarations must appear in a file before
    // calls may be made to the function
    congratulate2(student, course, programmer);
}


