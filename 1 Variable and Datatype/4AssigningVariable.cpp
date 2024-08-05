#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;     //if we don't store any value to "c" variable , then a garbage value(random number is stored in it.)
    a = 10;
    b =14;
    d=b;     // this is read as "value of b is assigned to d"
    // cout<<"Sum of a and b is: "<<a+b;
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl<<"d: "<<d<<endl;
    cout<<"sum of a and b: "<<a+b;
    return 0;
}