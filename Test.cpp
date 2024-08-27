#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream obj;
    obj.open("practise.txt");

    string data;
    while(obj.eof() == false){
        getline(obj, data);
        cout<<data<<endl;
    }

    return 0;
}