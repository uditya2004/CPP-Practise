#include <iostream>
using namespace std;

//Implicit converstion - Compiler autmatically change the datatype in this case

// Example 1
// int main () {
//     cout<< ('a' + 1) <<endl;   // out of char and int , int datatype is bigger , so char is also converted to int datatype and added to 1
//     return 0;                   // like A = 65 , a=97
// }


//-------------
// Example 2
// int main () {
//     cout<< 5/2.0;  // out of int and float , float is bigger , so final answer is automatically converted in float
//     return 0;                  
// }

//================================

//Explicit conversion - We tell to convert the datatype intensionally.

int main () {
    cout<< int ('A')<<endl;  // "A" is converted to integer value

    cout<<char('A' + 1)<<endl;  //Output: B

    float PI = 3.14;
    cout<< int(PI);   // PI will be converted to int

    cout<< (float(10)/3);  // to get result in float, make num or deno.  float .
    return 0;                  
}