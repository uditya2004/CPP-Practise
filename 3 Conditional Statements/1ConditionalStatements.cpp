#include <iostream>
using namespace std;

//Check age for voting
// int main() {

//     int age;
//     cout<<"Enter your age: ";
//     cin>> age;

//     if (age>=18) {
//         cout<<"Can Vote!"<<endl;
//     } else {
//         cout<<"Can't Vote"<<endl;
//     }

//     return 0;
// }

//==================

//Largest of 2 Numbers

// int main() {

//     int num1,num2;
//     cout<<"Enter 1st number: ";
//     cin>> num1;

//     cout<<"Enter 2nd number: ";
//     cin>> num2;

//     if (num1 > num2) {
//         cout<<"1st number is bigger"<<endl;
//     } else {
//         cout<<"2nd Number is bigger"<<endl;
//     }
    
//     return 0;
// }

//======================================

//Print number even or ODD

// int main() {

//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;

//     if (num%2==0) {
//         cout<<"Even Number"<<endl;
    
//     } else if (num==1) {
//         cout<<"Composite Number"<<endl;
//     } else {
//         cout<<"Odd Number"<<endl;
//     }
    
//     return 0;
// }

//======================================

//Income Tax Calculator

// int main() {

//     int income;
//     float tax;
//     cout<<"Enter you Income: ";
//     cin>>income;

//     if (income < 500000) {
//         tax= 0;

//     } else if (income>500000 && income <1000000) {
//         tax = 0.2 * income;

//     } else if (income>1000000) {
//         tax = 0.3 * income;
//     }

//     cout<<"Tax: "<<tax;
    
//     return 0;
// }

//======================================

//Largest of 3 Numbers

int main() {

    int num1,num2,num3;
    
    cout<<"Enter 1st number: ";
    cin>>num1;

    cout<<"Enter 2nd number: ";
    cin>>num2;

    cout<<"Enter 3rd number: ";
    cin>>num3;

    if (num1>num2 && num1> num3) {
        cout<< "1st number is the greatest"<<endl;

    } else if (num2>num1 && num2> num3) {
        cout<< "2nd number is the greatest"<<endl;
    } else {
        cout<< "3rd number is the greatest"<<endl;
    }
    return 0;
}


