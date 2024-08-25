#include <iostream>
using namespace std;

template <typename T>
class add {
    T num1;
    T num2;

public:
    add(T a, T b){
        num1 = a;
        num2 = b;
    }

    void display(){
        cout<<num1+num2<<endl;
    }
};


int main() {
    add<int> obj1(1,2);
    obj1.display();

    add<double> obj2(1.3 , 3.4);
    obj2.display();

    return 0;
}