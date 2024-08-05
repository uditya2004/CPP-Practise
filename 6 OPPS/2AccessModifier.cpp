/*
Access modifier:- Where our methods and attributes can be used are decided by access modifiers

3 Types of Access Modifiers:

i) private: data & methods only accessible inside class and "Friend Function"
ii) public: data & methods accessible to everyone
iii) protected : data & methods accessible inside class & to its derived class

Note: 
1. By default Access modifier is Private

*/

#include <iostream>
using namespace std;

class Student {
    int rollno;  //This will be a private attribute

public:          //All the attributes and methods written below "public" keyword in a class, are made public
    string name;
    float cgpa;

    void getPercentage() {
        cout<<(cgpa * 10)<<"%"<<endl;
    }

};

int main() {
    Student obj1;  //object
    obj1.name= "uditya";
    obj1.cgpa= 9.5;

    cout<<"name: "<< obj1.name<<endl;
    cout<<"CGPA: "<<obj1.cgpa<<endl;

    obj1.getPercentage();
    return 0;
}