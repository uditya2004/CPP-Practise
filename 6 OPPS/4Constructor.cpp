/*
Constructor:- Special method invoked automatically at time of object creation. 

They are Used for Initialisation of properties.

2 Types:-
i)Non-parameterized :-  constructor function without parameter
ii) Parameterized:- constructor function with parameter.

Characteristics:-
• If we don't define constructor , then compiler will define it automatically. By Default non-parameterized constructor is created
• Same name as class
• Constructor doesn't have a return type. (so we don't write return typ)
• Constructor method should always be made in public access in a class as main() function should be able to access this function if it's being called automatically at the time of object creation.
• Only called once (automatically), at object creation
• Memory allocation happens when constructor is called and some value is initialized. 

----------------
• We can write multiple constructors in a class having same name but having difference in parameters. This is called constructor overloading
*/

#include <iostream>
using namespace std;

class Car {
    string name;
    string color;

public:
    //defining constructor
    Car() {
        cout<<"constructor without parameters.."<<endl;  // Also called as non-parameterized constructor
    }
    
    Car(string nameValue, string colorValue) {
        cout<<"constructor with parameters.."<<endl;
        name = nameValue;
        color= colorValue;
    }

    
    // Car(string name, string color) {
    //     this->name = name;    // when we use same name for attribute and parameter, we can differentiate them using "this->" . Here "id" on left indicate the id for object, whereas "id" on right indicated the id parameter value.
    //     this->color= color;
    // }

    //Methods
    void start() {
        cout<<"Car started.."<<endl;
    }

    void stop() {
        cout<<"Car stopped.."<<endl;
    }

    //defining a getter to check if the name is assigned by constructor or not
    string getName() {
        return name;
    }

};

int main() {
    Car BMW;  // Non parameterized constructor will be called
    Car skoda("Lamborgini", "Blue");  //Parameterized constructor will be called.

    cout<<skoda.getName()<<endl;

    return 0;
}

