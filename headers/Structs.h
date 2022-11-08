// include pre-processor directives
#include <iostream>

// a struct is a collection of related data (members)
// the members may be only fields (variables)
// the members may be of different types
// declare a struct for a Person
struct Person
{
    // declare two members in the Person struct
    float heightInMeters;
    int weightInKilos;
};

// use C++ standard library namespace
using namespace std;

/* this function uses the Person struct for purpose
 * of displaying the values in its members */
void accessStructMembers(void){
    // declare a Person struct
    struct Person person;

    // assign values to the members of the Person struct
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

    // display values in members
    cout << "Person's weight is " << person.weightInKilos << " kilograms." << endl;
     cout << "Person's hieght is " << person.heightInMeters << " meters." << endl;
}