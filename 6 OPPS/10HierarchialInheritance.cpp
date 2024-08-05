//Bird and Fish are animals

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

//Bird and Fish are inheriting from single parent class i.e Animal

class Bird: public Animal {
public:
    void fly() {
        cout<<"Flying...\n";
    }
};

class Fish: public Animal {
public:
    void swim() {
        cout<<"Swims..\n";
    }
};


int main() {
    Bird Sparrow;
    Fish whale;

    whale.eat();
    Sparrow.eat();
    return 0;
}