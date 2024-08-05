/*
When a function of same name is made in the parent class as well as in the child class , then if the objecct is created using the child class then the function of the child class will operator , thus overriding the function of the parent class.
*/


#include <iostream>
using namespace std;

class Parent {
public: 
    void show() {
        cout<<"Parent class..";
    }
};

class Child: public Parent {
public: 
    void show() {
        cout<<"Child class..";
    }
};


int main() {
    Child obj;

    obj.show();

    return 0;
}