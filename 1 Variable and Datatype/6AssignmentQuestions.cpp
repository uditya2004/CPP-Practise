#include <iostream>
using namespace std;

//Area 
// int main() {
//     int a,b;
//     cout<<"Enter 1st side: ";
//     cin>>a;

//     cout<<"Enter 2nd side: ";
//     cin>>b;

//     cout<<"Area: "<<a*b;

//     return 0;
// }

//=======================================

//calculate price
int main() {
    int pencil,pen,eraser;

    cout<<"Enter price of Pencil: ";
    cin>>pencil;

    cout<<"Enter price of pen: ";
    cin>>pen;

    cout<<"Enter price of eraser: ";
    cin>>eraser;

    int totalPrice= pencil+pen+eraser;
    cout<<"Total bill: "<< totalPrice + (0.18 * totalPrice ) <<" (including GST)";

    return 0;
}