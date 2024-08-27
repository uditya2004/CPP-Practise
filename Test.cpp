#include <iostream>
using namespace std;

class Demo {
    int a,b;
public:
    Demo(int val1, int val2){
        a = val1;
        b = val2;
    }
    friend void display(Demo &m);
};

void display(Demo &m){
    cout<<m.a<<" "<<m.b<<endl;
}

int main() {
    Demo obj1(1,2);

    display(obj1);

    return 0;
}