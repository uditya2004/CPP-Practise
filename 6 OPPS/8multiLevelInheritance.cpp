#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout<<"eats..\n";
    }

    void breath() {
        cout<<"breaths..\n";
    }
};


class Mammals : public Animal {
public:
    string bloodtype= "Warm";
};


class Dog: public Mammals {
public:
    void tailwag() {
        eat();
        cout<<"wagging tail";
    }
    
};

int main() {
    Dog BullDog;

    BullDog.tailwag();

    //calling inherited properites and methods
    cout<<BullDog.bloodtype<<endl;
    BullDog.breath();
    BullDog.eat();



    return 0;
}