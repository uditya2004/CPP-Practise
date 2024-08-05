#include <iostream>
using namespace std;

int main() {
    float a,b;

    cout<<"Enter 2 Numbers: ";
    cin>>a>>b;

    try {
        if (b !=0) {
            cout<<"Division: "<<a/b<<endl;
        } else{
            throw(b);
        }
    }

    catch(float b) {
        cout<<"ERROR: Division by "<<b<<endl;
    }

    return 0;
}