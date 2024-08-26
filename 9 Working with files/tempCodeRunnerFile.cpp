#include <iostream>
#include <fstream>

#include <string>                        //eof() is present in "string" header file.
using namespace std;

int main() {
    ifstream obj1;
    obj1.open("sample.txt");

    string data;                         // creating a variable to store data

    //When we have to print multiple lines stored in a file
    while (obj1.eof() == false) {             // We run the loop untile "End of file" is not encountered
        getline(obj1, data);              // In every iteration it stores 1 line into variable "data", in next iteration it stores next line
        cout<<data<<endl;
    }

    obj1.close();                          // A good programmer always close the file after use

    return 0;
}