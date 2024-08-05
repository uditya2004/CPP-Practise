#include <iostream>
using namespace std;

//Function to take Product of 2 numbers

// double takeproduct(float x, float y) {
//     return x*y;
// }

// int main() {
//     int a,b;
//     cout<<"Enter a and b";
//     cin>>a>>b;

//     cout<<"Product of "<<a<<" and "<<b<<" is: "<<takeproduct(a,b)<<endl;


//     return 0;
// }

//==========================
//Check num is even or odd using function

// void isEven(int x) {
//     if (x %2 ==0) {
//         cout<<x<<" is even";
//     } else {
//         cout<<x<<" is odd";
//     }
// }

// int main() {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
    
//     isEven(num);

//     return 0;
// }

//=================

//Function to find factorial

//Check num is even or odd using function

int factorial(int a) {
    int fact=1;
    for (int i=2; i<=a; i++) {
        fact *=i;
    }

    return fact;
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is: "<<factorial(num);

    return 0;
}