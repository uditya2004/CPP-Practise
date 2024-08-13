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