#include <iostream>
using namespace std;

class Demo{
    int a;
public:
    Demo(int val1){
        a = val1;
    }

    friend class Demo2;

};

class Demo2{
public:
    void display(Demo &m){
        cout<<m.a;
    }
};

int main() {
    Demo obj(1);

    Demo2 obj2;

    obj2.display(obj);
    return 0;
}