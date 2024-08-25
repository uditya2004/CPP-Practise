#include <iostream>
using namespace std;

template <typename T1, typename T2 = int>
class Demo{
    T1 val1;
    T2 val2;

public:
    Demo(T1 a, T2 b ){
        val1 = a;
        val2 = b;
    }

    void Display(){
        cout<<"Num1: "<< val1 <<"    Num2: "<<val2<<endl;
    }
};


int main() {
    Demo<string> obj1("uditya", 3);
    obj1.Display();


    Demo<double> obj2(2.33, 20);
    obj2.Display();

    return 0;
}