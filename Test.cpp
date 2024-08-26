#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string data;

    ofstream obj1;
    obj1.open("practise.txt");

    for (int i=1 ; i<4 ; i++){
        cout<<"Enter "<<i<<" string";
        getline(cin, data);

        obj1<<data<<"\n";

    }


    return 0;
}