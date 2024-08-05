#include <iostream>
using namespace std;

class Car{
public:
    string name;
    string color ;
    int *mileage;

    Car(string name, string color) {
        this ->name = name;
        this ->color = color;
        *mileage = 12;
    }

    ~Car() {
        cout<<"deleting object.." <<endl;
        if (mileage != NULL) {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main() {
    Car obj1("BMW", "Blue");
    
    cout << "name:- "<<obj1.name<<endl;
    cout << "color:- "<<obj1.color<<endl;
    cout << "mileage:- "<<*obj1.mileage<<endl;

    return 0;
}