#include <iostream>
using namespace std;

template <typename T1, typename T2 = string>
class Demo{
    T1 val1;
    T2 val2;
public:
    Demo(T1 a, T2 b){
        val1 = a;
        val2 = b;
    }

    void display(){
        cout<<"val1: "<< val1<<"  val2: "<<val2 << endl;
    }
};

int main() {
    Demo<int> obj1(1,"uditya");
    obj1.display();


    Demo<string , double> obj2("uditya", 9.456);
    obj2.display();

    return 0;
}