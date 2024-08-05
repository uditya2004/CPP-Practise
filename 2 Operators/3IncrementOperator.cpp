#include <iostream>
using namespace std;

// int main() {
//     int a = 5;
//     int b =a++;

//     cout<<"b = "<<b<<endl; //5   "Pehle assign hoga value to b , then a will increment by 1"
//     cout<<"a = "<<a<<endl; //6
    

//     return 0;
// }

//===================================

int main() {
    int a = 5;
    int b =++a;

    cout<<"b = "<<b<<endl; //6  "Pehle a will increment by 1 and then value of a will be assigned to b"
    cout<<"a = "<<a<<endl; //6
    

    return 0;
}