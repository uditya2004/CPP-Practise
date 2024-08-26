/*
The useful classes (coming from header file "fstream") for working with files in c++ are:
1. fstreambase
2. ifstream -> Derived from fstreambase
3. ofstream -> Derived from fstreambase


Note:- 
- We we have to write in file, we say -> Sending "OUT" the info from program to the file. Thus use ofstream
- We we have to read from the file, we say -> Taking info "IN" to the program to the file. Thus use ifstream


----------------
In order to work with files in C++, we will have to open the file first . There are 2 ways to open a file:-

1. Using Constructor
2. Using the member function open() of the class
*/


//==========================================================================


// Question:- Input string from user and put it in the file named "sample.txt"

#include <iostream>
#include <fstream> //Used for working with files

using namespace std;

//Method 1:- Write using constructor method
int main() {

    //Taking String Input From User
    string data;
    cout<<"Enter string data to be stored: ";
    // cin>> data;              // This takes only 1 word as input
    getline(cin, data);         // This will take complete line as input



    //Opening and writing it to file
    ofstream obj1("sample.txt");         // Opening a file using constructor method, for writing
    obj1<<data;                         //writing string in "data" into the file. Works like "cout"

    obj1.close();      //A good programmer always close a file after use.

    return 0;
}


//==============================================
//Method 2:- Write using open() method

#include <iostream>
#include <fstream> //Used for working with files

using namespace std;

int main() {

    //Taking String Input From User
    string data;
    cout<<"Enter string data to be stored: ";
    getline(cin, data);

    //Opening and writing it to file
    ofstream obj1;
    obj1.open("sample.txt");   //opening the file

    obj1<<data;                 // Pushing the info in "data" variable into the file


    obj1.close();


    return 0;
}


//============================
//Ques: Input 3 lines and store every line in a separate line into the file named "sample.txt"
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