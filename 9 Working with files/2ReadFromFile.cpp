//Opening a file and reading from it.

//---------
#include <iostream>
#include <fstream>
using namespace std;

//Method 1:- Reading using constructor method
int main() {
    string data;                          // Creating a variable to store string brought from the file

    ifstream obj1("sample.txt");        // Here we are opening a file using constructor method.

    // obj1>>data;                        // Brought string from file and stored it to variable str2. But this will only store the 1st word
    getline(obj1, data);                  // To get the complete line stored in a file we use getline() . But this will store only 1 line in file , duplicate this command mulitple times to read multiple lines
    

    cout<<data;                           // Printing value stored in str2. Works like "cin"

    obj1.close();

    return 0;
}

//==========================================================

//Method 2:- Reading using open() method
// int main() {
//     string data;

//     ifstream obj1;
//     obj1.open("sample.txt");

//     getline(obj1, data);

//     cout<<data<<endl;

//     obj1.close();


//     return 0;
// }


//============================================
//Method 3:- Reading the file using eof()

#include <iostream>
#include <fstream>

#include <string>                        //eof() is present in "string" header file.
using namespace std;

int main() {
    ifstream obj1;
    obj1.open("sample.txt");

    string data;                         // creating a variable to store data

    //When we have to print multiple lines stored in a file
    while (obj1.eof() == 0) {             // We run the loop untile "End of file" is not encountered
        getline(obj1, data);              // In every iteration it stores 1 line into variable "data", in next iteration it stores next line
        cout<<data<<endl;
    }

    obj1.close();                          // A good programmer always close the file after use

    return 0;
}