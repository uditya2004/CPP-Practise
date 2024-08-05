/*
Inheritance:- When properties & member functions of base class are passed on to the derived class.

● By Default, inheritance is "private" in c++.

"Takat to change" Order:- Private > protector > public. For eg:-

class1 - parent class , inherited of properties & methods in class 2 (child class) can be through 3 modes: public, private, protected
{class1:public, class2:public -> public}
{class1:public, class2:private -> private}
{class1:public, class2:protected -> protected}

{class1:protected, class2:public -> protected}
{class1:protected, class2:private -> private}
{class1:protected, class2:protected -> protected}

{class1:private, class2:public -> protected}
{class1:private, class2:private -> private}
{class1:private, class2:protected -> protected}
*/

//Example 1
#include <iostream>
using namespace std;

class Animal {
public:
    string color;

    void eat() {
        cout<<"Eats..\n";
    }

    void breath() {
        cout<<"Breaths..\n";
    }
};


class Fish : public Animal {    //Inheritance , "protected specify the mode of inheritance"
public:
    int fins;

    void swim() {
        cout<<"swims..\n";
    }
};

int main() {
    Fish rohu;

    rohu.fins=3;
    rohu.color="white";

    // rohu.swim();

    //calling inherited properties
    rohu.eat();
    rohu.breath();
    cout<<"color:- "<<rohu.color<<endl;

    return 0;
}

//============================

//Example 2

// class Person {
// protected:
//     string fname;
//     string lname;

// public:
//     Person(string fnameVal, string lnameVal) {
//         fname = fnameVal;
//         lname = lnameVal;
//     }
// };


// class Student : public Person {
//     int gradYear;
// public:
//     Student (string fname, string lname, int gradYearVal) : Person(fname, lname) {
//         gradYear = gradYearVal;

//     }
// };

// int main() {
//     Student stud1 ("uditya","kumar", 2026);

//     return 0;
// }
