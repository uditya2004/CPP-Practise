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