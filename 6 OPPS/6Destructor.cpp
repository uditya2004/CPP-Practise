#include <iostream>
using namespace std;

//Eample 1
class Student {
    string name;
    string regno;

public:
    Student(string nameVal, string regnoVal){
        name = nameVal;
        regno = regnoVal;
    }

    void show() {
        cout<<"name: "<<name<<endl;
        cout<<"regno: "<<regno<<endl;
    }

    ~Student(){
        cout<<"Destructor called....";
    }
};

int main() {
    Student stud1("uditya", "23bce10497");

    stud1.show();

    return 0;
}

//--------------------------------
//Example 2
// class Car{
// public:
//     string name;
//     string color ;
//     int *mileage;

//     Car(string name, string color) {
//         this ->name = name;
//         this ->color = color;
//         mileage = new int;  // Allocate memory for mileage
//         *mileage = 12;
//     }

//     ~Car() {
//         cout<<"deleting object.." <<endl;
//         if (mileage != NULL) {
//             delete mileage;
//             mileage = NULL;
//         }
//     }
// };

// int main() {
//     Car obj1("BMW", "Blue");
    
//     cout << "name:- "<<obj1.name<<endl;
//     cout << "color:- "<<obj1.color<<endl;
//     cout << "mileage:- "<<*obj1.mileage<<endl;

//     return 0;
// }