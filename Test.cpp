#include <iostream>
using namespace std;

template<typename T>
T sum(T a, T b){
    return a+b;
}

int main() {
    cout<<sum(9,5)<<endl;
    cout<<sum(9.5,5.6)<<endl;
    
    return 0;
}