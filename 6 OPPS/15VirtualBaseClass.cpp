#include <iostream>
using namespace std;

class grandparent {
public:
    int n;
    void Input() {
        cout<<"Enter a number: ";
        cin>>n;
    }

    void display() {
        cout<<n<<endl;
    }
};

class parent1: virtual public grandparent {
};

class parent2: virtual public grandparent {
};

class Child: public parent1, public parent2 {

};

int main() {

    Child obj;
    obj.Input();
    obj.display();

    return 0;
}