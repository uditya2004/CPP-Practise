//Finding Area of rectangle

#include <iostream>
using namespace std;

class xyz {
    int base, height;
public: 
    xyz() {
        cout<<"Enter base";
        cin>>base;

        cout<<"Enter height";
        cin>>height;
    }

    friend class Area;
};

class Area {
public:
    int FindingArea(xyz& m) {
        return (m.base * m.height);
    }
};

int main() {
    xyz obj1;
    Area obj2;

    cout<<obj2.FindingArea(obj1);


    return 0;
}