/*
- Virtual functions is an example of Run Time Polymorphism
- Virtual functions are defined in the parent class using the keyword "virtual" and it's overridden in the base class
*/


//With virtual keyword
#include <iostream>
using namespace std;

class Parent {
public:
    virtual void hello() {              //Using virtual keyword
        cout<<"Parent hello..\n";
    }
};

class Child : public Parent {
public:
    void hello() {
        cout<<"Child Hello..\n";
    }
};


int main() {
    Child child1;
    Parent *ptr;   // We created pointer of parent class . This mean Pointer "ptr" will point to the object of parent class

    ptr = &child1;   // Hai to pointer parent class ka , lekin child class ko point kar rha hai. Here we are binding our parent class pointer with the child class object.
    
    ptr->hello();   // Output: Child Hello..
    return 0;
}

//If used virtual function:- Parent class ka pointer le lo , par agar vo child class object ki taraf point kr rha hai, tab """child class""" ka hi function call hoga


//=============================
//Without Using virtual keyword

// class Parent {
// public:
//     void hello() {
//         cout<<"Parent hello..\n";
//     }
// };

// class Child : public Parent {
// public:
//     void hello() {
//         cout<<"Child Hello..\n";
//     }
// };


// int main() {
//     Child child1;
//     Parent *ptr;   // We created pointer of parent class . This mean Pointer "ptr" will point to the object of parent class

//     ptr = &child1;   // Hai to pointer parent class ka , lekin child class ko point kar rha hai. Here we are binding our parent class pointer with the child class object.
    
//     ptr->hello();   // Output: Parent hello..
//     return 0;
// }

//If used virtual function:- Parent class ka pointer le lo , par agar vo child class object ki taraf point kr rha hai, tab """Parent class""" ka hi function call hoga