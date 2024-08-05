/*
SYNTAX: 

do {
    //do some work
} while(condition);

//work gets done atleast once irrespective of condition
*/

//===============================

//print 1 to 5

#include <iostream>
using namespace std;

// int main() {
//     int i =1;
//     do {
//         cout<<i<<endl;
//         i++;
//     } while (i<=5);

//     return 0;
// }

//===============================

//let user enter numbers , and print entered number. But skip printing part when they entered multiple of 10

int main() {
    int num;
    do {
        cout<<"Enter number: ";
        cin>>num;

        if (num %10 == 0) {
            continue;
        }
        cout<<"Entered number is: "<<num<<endl;
    } while (true);

    return 0;
}