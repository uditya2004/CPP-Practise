/*
SYNTAX:

for(initialisation; condition; updation) {

}

Loop runs till the condition is true
*/


// ============================

//printing 1,2,3,4,5
#include <iostream>
using namespace std;

// int main(){

//     for (int i=1; i<=5; i++) {
//         cout<<i<<endl;
//     }

//     return 0;
// }

// ===============================

//printing n to 1

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;

//     for (int i=n; i>=1; i--) {
//         cout<<i<<endl;
//     }

//     return 0;
// }

// ===============================

//print n numbers

// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;

//     for (int i=1; i<=n; i++) {
//         cout<<i<<endl;
//     }

//     return 0;
// }

// ============================-

//sum of n natural numbers

// int main(){
//     int n,sum;
//     cout<<"Enter a number: ";
//     cin>>n;

//     sum =0;
//     for (int i=1; i<=n; i++) {
//         sum = sum + i;
//     }

//     cout<<sum;

//     return 0;
// }

// ==========================

/*
print pattern
****
****
****
****
*/

// int main(){

//     for (int i=1; i<=4; i++) {
//         for (int j=1; j<=4; j++) {
//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     return 0;
// }


// ============================-

//print 1 to 10 but skip 3

// int main(){
//     for (int i=1; i<=10; i++) {
//         if (i==3) {
//             continue;
//         } else {
//             cout<< i<<endl;
//         }
//     }

//     return 0;
// }

// ==========================

// Check Prime number 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int factors = 0;

    for (int i=2; i<sqrt(num); i++) {
        if (num % i ==0) {
            factors +=1;
            cout<<"Not Prime"<<endl;
            break;
        }
    }

    if (factors == 0) {
        cout<<"Prime";
    }

    return 0;
}