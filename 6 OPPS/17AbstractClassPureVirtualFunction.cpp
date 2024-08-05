/*
ABSTRACT CLASS
- Abstract class is a class, which is not used to create objects. It is only used to create blueprint for his derived class through inheritance.
- In abstract class there should exist atleast 1 pure virtual function.
*/

//====================

/*
PURE VIRTUAL FUNCTION
- A pure virtual function (or abstract function) is a virtual function with no definition/logic.
- It is declared by assigning 0 at the time of declaration.
*/

//===================

//This is an abstract class

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;   // This is pure virtual function or abstract function
};

class Circle: public Shape {
public:
    void draw() {
        cout<<"Draw circle..\n";
    }
};

class Square: public Shape {
public:
    void draw() {
        cout<<"Draw Square..\n";
    }
};

int main() {
    Circle cir1;
    cir1.draw();

    Square sq1;
    sq1.draw();


    return 0;
}