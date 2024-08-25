#include <iostream>
using namespace std;

template <typename T>
class Summation {

public:   
    T num1,num2;
    
    Summation(T a, T b){
        num1 = a;
        num2 = b;
    }


    void show() {
        cout<<"Sum is: "<<num1 + num2<<endl;
    }

};


int main() {
    Summation<int> obj1(5, 4);
    Summation<double> obj2(4.1, 2.1);

    // obj1.show();
    obj2.show();

    return 0;
}