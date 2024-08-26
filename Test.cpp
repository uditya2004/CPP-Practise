#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string data;
    cout<<"Enter a data: ";
    getline(cin, data);


    ofstream obj1;
    obj1.open("practise.txt");

    obj1<<data;

    obj1.close();


    return 0;
}