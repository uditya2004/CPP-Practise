#include <iostream>
using namespace std;

/*
CONCEPT:
Function should be declared before the function call statement. If the entire body of the function is written below the function call line, we should atleast declare the function existance above the function call
*/

void sayhello();  // just declaring the function 

int main() {
    sayhello();

    return 0;
}

void sayhello() {
    cout<<"Hello";
}