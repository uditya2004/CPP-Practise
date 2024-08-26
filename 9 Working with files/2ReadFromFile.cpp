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
int main() {
    string data;

    ifstream obj1;
    obj1.open("sample.txt");

    getline(obj1, data);

    cout<<data<<endl;

    obj1.close();


    return 0;
}


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
    while (obj1.eof() == false) {             // We run the loop untile "End of file" is not encountered
        getline(obj1, data);              // In every iteration it stores 1 line into variable "data", in next iteration it stores next line
        cout<<data<<endl;
    }

    obj1.close();                          // A good programmer always close the file after use

    return 0;
}



//===============================
//Question: WAP to write 3 string into the file and read all 3 string from the File

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