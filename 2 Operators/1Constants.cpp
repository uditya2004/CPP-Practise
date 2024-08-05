#include <iostream>
using namespace std;

int main() {

    const float PI = 3.14;    // add keyword "const" to any variable. Constant declared variable cannot be modified throughout the program.
    const float g= 9.8;    //constant declared variable should be declared with their initial value.

    /* THIS IS NOT ALLOWED 
    const float PI;
    PI =3.14
    */

    return 0;
}

/*
Unlike MACROS , constants occupy space in the memory just like normal variable.

On the runtime , value is fetched from the location in the memory where it was stored.
*/