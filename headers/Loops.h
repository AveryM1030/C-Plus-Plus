// include pre-processor directives
#include <iostream>

#define STOP 0
#define START 10
// defined macro expressions
#define condition(i) (i > STOP)
#define break(i) (i == 5)
#define continue(i) (i % 2)

// use C++ standard library namespace
using namespace std;

/* this function will use a while loop */
void loops1(void){
    // declare loop counter variable and initialize it
    int i = START;

    // set up while loop
    // use marco expression as condition of while loop
    while(condition(i)){
        cout << i << " ";
        i--;
    }
    cout << "blastoff" << endl;
}

