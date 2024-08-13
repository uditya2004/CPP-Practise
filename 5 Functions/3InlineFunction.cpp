/*
When a function is inline , then the complete body of the function is pasted in place of function call statement at the time of execution , reducing the time spent on going to the function and coming back to the call statement . Thus reducing overhead.

- If the function is small( approx 2 lines), then we can make that function inline and save some execution delay.
- If the function is long and we make that function inline then the compiler will rejet our request of inline and will use it as a normal function.
*/
#include <iostream>
using namespace std;
 
inline int Getmax(int a, int b) {          // Use of inline keyword
    return a>b ? a:b ;                     // Use of Ternary Operator
}


int main() {
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>> a>>b;

    cout<<"Maximum value is: "<<Getmax(a,b)<<endl;

    return 0;
}