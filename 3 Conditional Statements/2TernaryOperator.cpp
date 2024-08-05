#include <iostream>
using namespace std;

// Example 1: check if adult
int main() {
    int age;
    cout<<"Enter age: ";
    cin>>age;

    //SYNTAX: variable = condition? statement 1 : statement2;      ->> if condition is true , statement 1 will be stored in variable , esle statement 2 will be stored in  variable
    bool isAdult = age>=18 ? true : false;   

    cout<<isAdult;

    return 0;
}

//===================================

// Example 2: num is even or odd

// int main() {
//     int num;
//     cout<< "Enter a number: ";
//     cin>>num;

//     bool isEven= num % 2 == 0 ? true : false;

//     cout << isEven;
    
//     return 0;
// }