#include <iostream>
using namespace std;

//Find Factorial

// int main() {
//     int ans = 1;

//     int num;
//     cout<<"Enter number: ";
//     cin>>num;

//     for (int i=2; i<=num; i++) {
//         ans = ans * i ;
//     }

//     cout<<"Factorial of "<<num<<" is: "<<ans<<endl;

//     return 0;
// }

//===================

//Multiplication table of entered number

// int main() {
//     int num;
//     cout<<"enter number: ";
//     cin>>num;

//     for (int i=num; i<=num*10; i = i+num) {
//         cout<<i<<endl;
//     }

//     return 0;
// }

//===================

//Armstrong Number

// int main() {
//     int num,digit;
//     cout<<"enter number: ";
//     cin>>num;

//     int num1=num;
//     int sum = 0;
//     while (num1>0) {
//         digit = num1 % 10;
//         sum = sum + (digit*digit*digit);
//         num1 = num1/10;        

//     }

//     if (sum==num) {
//         cout<<"Armstrong"<<endl;
//     } else {
//         cout<<"Not Armstrong"<<endl;
//     }
//     return 0;
// }

//==============================

// print all prime numbers between 2 to N

// #include <cmath>
// int main() {
//     int N;
//     cout<<"Enter a number: ";
//     cin>>N;

//     for (int i=2; i<=N; i++) {

//         bool isPrime= true;
        
//         for (int j=2; j<= sqrt(i); j++) {
//             if (i % j ==0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime == true) {
//         cout<<i<<" is Prime"<<endl;
//         }

        
//     }

//     return 0;
// }

//====================================

//Print N fibonacci numbers

// int main() {
//     int N;
//     cout<<"Enter number: ";
//     cin>>N;

//     int a= 0;
//     int b= 1;
//     cout<<a<<" "<<b<<" ";

//     int c;

//     while (N>2) {
//         c= a+b;
//         a=b;
//         b=c;
//         cout<<c<<" ";

//         N = N- 1;
//         // cout<<N;
//     }

//     return 0;
// }