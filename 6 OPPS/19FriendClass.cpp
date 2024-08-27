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

//=====================================
#include <iostream>
using namespace std;

class Demo{
    int a,b;
public:

    Demo(int val1, int val2){
        a = val1;
        b = val2;
    }

    friend class Demo2;
};

class Demo2 {
public:
    void Display(Demo &m){
        cout<<m.a<<" "<<m.b;
    }
};

int main() {
    Demo obj1(1,2);

    Demo2 obj2;

    obj2.Display(obj1);

    return 0;
}