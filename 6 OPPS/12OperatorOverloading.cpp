//Example : operator Overloading
/*
SYNTAX: 
return_Type operator opSymbol ( ) { ...}
*/
#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;
public: 
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void shownum() {
        cout<<real<<" + "<<img<<"i\n";
    }
    
    //Operator Overloading For Addition
    void operator + (Complex& a) {
        int ResultReal = this-> real + a.real;
        int ResultImg = this-> img + a.img;

        Complex c3(ResultReal, ResultImg);
        cout<<"Addition Result: ";
        c3.shownum();
    };

    //Operator Overloading For Addition
    void operator - (Complex& a) {
        int ResReal = this-> real - a.real;
        int ResImg = this-> img - a.img;

        Complex c3(ResReal, ResImg);
        cout<<"Substraction Result: ";
        c3.shownum();

    }
};

int main() {
    Complex c1(1,2);
    Complex c2(3,4);

    c1.shownum();
    c2.shownum();

    c1 + c2;
    c1 - c2;

    return 0;
}