
class Parent {
public:
    void hello() {
        cout<<"Parent hello..\n";
    }
};

class Child : public Parent {
public:
    void hello() {
        cout<<"Child Hello..\n";
    }
};


int main() {
    Child child1;
    Parent *ptr;   // We created pointer of parent class . This mean Pointer "ptr" will point to the object of parent class

    ptr = &child1;   // Hai to pointer parent class ka , lekin child class ko point kar rha hai. Here we are binding our parent class pointer with the child class object.
    
    ptr->hello();   // Output: Child Hello..
    return 0;
}