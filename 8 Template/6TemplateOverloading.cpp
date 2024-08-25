#include <iostream>
using namespace std;
 
void show(int a){                // This is exact match function
    cout<<"First function: "<<a<<endl;
}


template <typename T>          // This is Templatised function
void show(T a){
    cout<<"Templatised Function: "<<a<<endl;
}


int main() { 
    show(4);                //Output ->  First function: 4
                            //Out of Templatised and Exact match function - Exact match takes the highest priority
    return 0;
}