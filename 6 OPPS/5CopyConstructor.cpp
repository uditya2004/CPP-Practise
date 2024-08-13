/*
COPY CONSTRUCTOR: Special Constructor used to copy properties of one object into another.

• If we don't create, comiler will automatically create this COPY CONSTRUCTOR.

Note: Before making a copy constructor, it's mandatory to either make parameterized or non-parameterized constructor.

------------------------
SYNTAX:

CLASS_NAME(CLASS_NAME &z) {
    a=z.a  
}
*/


#include <iostream>
using namespace std;

// //Method 1: We don't created copy constructor - Compiler will atomatically create it.
// class Car {

// public:
//     string name;
//     string color;

//     Car(string name, string color) {
//         this->name=name;                //"name" on left indicate the name property for object. "name" on the right-hand side is the parameter passed to the constructor. 
//         this->color=color;
//     }


// };

// int main() {
//     Car obj1("BMW","Blue");

//     Car obj2(obj1);    //all the properties of obj1 will be copied to obj2. Here compiler made the copy constructor and performed the copy operations.

//     cout<<"name:- "<<obj2.name<<endl;
//     cout<<"color:- "<<obj2.color<<endl;

//     return 0;
// }

//========================

//Method 2: We created our copy constructor
class Car {

public:
    string name;
    string color;

    Car(string name, string color) {
        this->name=name;
        this->color=color;
    }

    //copy constructor
    Car(Car& original) {
        cout<<"copying original no..\n";
        name= original.name;
        color= original.color;
    }


};

int main() {
    Car obj1("BMW","Blue");

    Car obj2(obj1);    //This time our copy constructor will be called.

    cout<<"name:- "<<obj2.name<<endl;
    cout<<"color:- "<<obj2.color<<endl;

    return 0;
}