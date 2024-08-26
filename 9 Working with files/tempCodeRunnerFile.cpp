#include <iostream>
#include <fstream> //Used for working with files

using namespace std;

int main(){
    string data;

    ofstream obj1;
    obj1.open("sample.txt");

    for (int i=1 ; i<4 ; i++){
        cout<<"Enter "<<i<<" string";
        getline(cin, data);

        obj1<<data<<"\n";         // Add the string to the file followed by a newline

    }

    obj1.close();

    return 0;
}