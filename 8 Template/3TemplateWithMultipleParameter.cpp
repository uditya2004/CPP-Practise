/* CONCEPT

→Using Below line we tell compiler to make a class by assuming datatype T1 and T2 for the time being.
        "template <typename T1, typename T2>"

→ We will tell the compiler what to fill in place of T1 and T2 while creating an object by below line:-
        "Pair<int , double> obj1(1,2.5); "
*/
//=======================================


#include <iostream>
using namespace std;

//EXAMPLE 1:- USING FUNCTIONS
template <typename T1, typename T2>

T1 add(T1 a, T2 b){
    return a+b;
}

int main() {
    // Using the template with an int and a double
    cout << add(3, 4.5) << endl;    // Here T1  will be Integer . So output will be in Integer datatype

    // Using the template with a double and an int
    cout << add(2.5, 4) << endl;   // Here T1  will be double . So Output will be in double datatype

    return 0;
}



//======================================================================
//EXAMPLE 1:- USING CLASS

template <typename T1, typename T2>
class Pair {

    T1 first;
    T2 second;

public:
    Pair(T1 firstVal, T2 secondVal){
        first = firstVal;
        second = secondVal;
    }

    void display(){
        cout<<"First: "<<first<<" Second: "<<second<<endl;
    }

};


int main() {
    Pair<int , double> obj1(1,2.5);
    obj1.display();

    Pair<int , string> obj2(1,"uditya");
    obj2.display();

    return 0;
}