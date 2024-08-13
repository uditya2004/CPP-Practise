#include <iostream>
using namespace std;

class Car {
    string name;
    string color;

public:
    Car(string name, string color) {
        this->name = name;
        this->color = color;
    }

    void show(){
        cout<<"name: "<<name<<endl;
        cout<<"color: "<<color<<endl;
    }

    Car(Car& orginal){
        name = orginal.name;
        color = orginal.color;
    }

};

int main() {
    Car obj1("BMW", "White");

    Car obj2(obj1);

    obj2.show();
    obj2.show();

    return 0;
}