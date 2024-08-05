#include <iostream>
#include <string> // Include this header for string
using namespace std;

//Example 1

// int main()
// {
//     string name;
//     cout<< "Enter Your Name: ";
//     cin>> name;    // this means , whatever is written on terminal now , will be stored in variable "name"
//     cout<<"Your name is:" << name;

//     return 0;
// }





//================================

//Example 2
// int main()
// {
//     string name;
//     cout<< "Enter Your Name: ";
//     // cin>> name;      if we take input like this , only 1st word of the name will be stored in the variable "name"
//     getline(cin,name); //to store full name we need getline()
//     cout<<"Your name is:" << name;

//     return 0;
// }

//================================

//Example 3 - Sum of 2 num

// int main() {
//     int a,b;
//     cout<<"Enter 1st num: ";
//     cin>>a;
//     cout<<"Enter 2nd num: ";
//     cin>>b;

//     cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
//     cout<<"a+b= "<<a+b;

//     return 0;
// }

//================================

//Example 4 - Average of 3subject marks

int main() {
    float sci,chem,maths;   // if we put "int" datatype , only the whole number will be printed, decimal part will be removed. 

    cout<<"Enter science marks: ";
    cin>>sci;

    cout<<"Enter chemistry marks: ";
    cin>>chem;

    cout<<"Enter maths marks: ";
    cin>>maths;

    cout<<"Average: "<<(sci+chem+maths)/3;

    return 0;
}