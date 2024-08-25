/*
TEMPLATE FUNCTION
It allows the same function to be used with different data types without code duplication.

Advantages of Template Functions
- Code Reusability: Write once, use with any data type.
- Efficiency: Eliminates the need for multiple overloaded functions.


SYNTAX
template <typename T>
T functionName(T parameter) {
    // function body
}
*/

#include <iostream>
using namespace std;

template <typename T>      // This make the function as template function . Where "T" act as a placeholder for datatype
T getmax( T a, T b) {
    if (a>b) {
        return a;
    } 
    
    else {
        return b;
    }
}


int main() {
    int a = 10;
    int b = 5;

    cout<<"Max of:"<<a<<" and"<<b<<" is: "<<getmax(a,b)<<endl;


    double c = 11.5;
    double d = 6.2;

    cout<<"Max of:"<<a<<" and"<<b<<" is: "<<getmax(c,d)<<endl;

    return 0;
}

// Here by using template function , we don't have to define the same function differently for "int" and "float" datatype.