/*
Polymorphism: Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

2Types of Polymorphism:
• Compile Time Polymorphism: In the compile time it is decided which function to call.
        i) Function Overloading: Function behaves differently dependinng upon the context . We make 2 functions having same name but different parameters to do the function overloading.
        ii) Operator Overloading: We define our own logic to change the behaviour of Operator.

• Run Time Polymorphism: In the Runtime it is decided which function to call.
        i)Function Overidding
*/

//Example of Function Overloading
#include <iostream>
using namespace std;

class Output {
public: 
    void show(int a) {      //if the parameter passed is integer then this function will be called.
        cout<<"Integer: "<<a<<endl;
    }

    void show(string b) {    //if the parameter passed is String then this function will be called.
        cout<<"String: "<<b<<endl;
    }
};

int main() {
    Output obj;

    obj.show("udi");
    obj.show(44);

    return 0;
}


