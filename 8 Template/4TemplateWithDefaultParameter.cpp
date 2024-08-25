#include <iostream>
using namespace std;

// template <typename T1, typename T2 = int>
// class Demo{
//     T1 val1;
//     T2 val2;

// public:
//     Demo(T1 a, T2 b ){
//         val1 = a;
//         val2 = b;
//     }

//     void Display(){
//         cout<<"Num1: "<< val1 <<"    Num2: "<<val2<<endl;
//     }
// };


// int main() {
//     Demo<string> obj1("uditya", 3);     //If we do not specify the 2nd datatype , it will take the default datatype
//     obj1.Display();


//     Demo<double, string> obj2(2.33, "uditya");  //If we specify the 2nd datatype, it will use the specified one .
//     obj2.Display();

//     return 0;
// }


//========================
//EXAMPL: USING FUNCTION

template <typename T1, typename T2 = string>
void display(T1 val1, T2 val2){
    cout<<"val1: "<<val1<<"  val2: "<<val2<<endl;
}

int main() {
    display(19, "uditya");      //If not specified , will use the default datatype. Otherwise it use the specified datatype


    display(19, 2.456);   // in functions even if we do not specify the datatype , it works . But in class we have to pecify the datatype while creating object.

    return 0;
}