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



#include <iostream>
#include <fstream>    //Used for working with files

using namespace std;


//opening a file and writing in it.
// int main() {

//     string str1 = "uditya Kumar";      //Sample text stored in a variable

    
//     ofstream obj1("sample.txt");       // Opening a file for writing
//     obj1<<str1;                        // writing string in str1 into the file. Works like "cout"

//     obj1.close();                      // closing a file
//     return 0;
// }



//============================================

//Ques :- Input string from user and put it in the file named "sample.txt"

int main() {

    //Taking String Input From User
    string str1;
    cout<<"Enter a string: ";
    // cin>> str1;              // This takes only 1 word as input
    getline(cin, str1);         // This will take complete line as input



    //Opening and writing it to file
    ofstream obj1("sample.txt");      // Here we are opening a file using constructor method.
    obj1<<str1;                      // But this write only the 1st word of string into the file


    obj1.close();  // closing a file
    
    return 0;
}