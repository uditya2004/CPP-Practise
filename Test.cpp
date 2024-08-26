#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string write_data;

    //Writing Into the file 
    ofstream obj1;
    obj1.open("practise.txt");

    for (int i=1 ; i<4 ; i++){
        cout<<"Enter "<<i<<" string";
        getline(cin, write_data);

        obj1<<write_data<<"\n";

    }

    obj1.close();  //Close the file before you start reading it , as This can cause problems because the data might not be fully flushed to the file before you try to read it.


    //Reading from the file (every line)
    cout<<"\nReading the file..."<<endl;
    
    ifstream obj2;
    obj2.open("practise.txt");

    string read_data;

    while (obj2.eof() == false) {
        getline(obj2, read_data );

        cout<<read_data<<endl;
    }

    
    obj2.close();

    return 0;
}