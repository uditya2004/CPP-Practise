#include <iostream>
using namespace std;

template <typename T1, typename T2>
class myPair{
    T1 first;
    T2 second;

public:
    myPair(T1 a, T2 b){
        first = a;
        second = b;
    }

    void display(){
        cout<<"First: "<<first<<" Second: "<<second<<endl;
    }
};

int main() {
    myPair<int , double> obj1(1, 3.4);
    obj1.display();

    myPair<int, string> obj2(1, "uditya");
    obj2.display();
    return 0;
}