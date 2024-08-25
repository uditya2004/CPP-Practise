#include <iostream>
using namespace std;

//Template child class inheriting from template Parent Class
template <typename T>
class Parent {
public:
    void display() {
        cout << "Parent class template" <<endl;
    }
};

template <typename T>
class Child : public Parent<T> {
public:
    void show() {
        cout << "Child class template" <<endl;
    }
};

int main() {
    Child<int> obj;
    
    obj.display();  // Calls Base's display method
    obj.show();     // Calls Derived's show method

    return 0;
}