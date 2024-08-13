#include <iostream>
using namespace std;

inline int Getmax(int a, int b) {
    return a>b ? a:b ;       // Use of Ternary Operator
}
int main() {
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>> a>>b;

    cout<<"Maximum value is: "<<Getmax(a,b)<<endl;

    return 0;
}