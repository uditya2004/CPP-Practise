// print 1,2,3,4

#include <iostream>
using namespace std;

// int main() {
//     int num =1;  //initialize
//     while (num <=4) {     //condition check
//         cout<<num<<endl;
//         num++;   // updation
//     }

//     return 0;
// }

//======================

//Allow user to input till user enters multiple of 10

int main() {
    int num = 1;
    while (num % 10 !=0) {
        cout<<"Enter number";
        cin>>num;
    }

    return 0;
}