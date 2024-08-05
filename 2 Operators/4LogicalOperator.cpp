#include <iostream>
using namespace std;

int main() {
    int a=3;
    int b=5;
    int c=9;

    cout<< (a<b && a<c)<<endl;   // True = 1 ,   AND symbol =&&

    cout<< (a<b || b>c)<<endl;  // True = 1 , Or symbol = ||

    cout<< (!(a==b))<<endl;   // True  , NOT symbol = ! , make true as false and false as true

    return 0;
}