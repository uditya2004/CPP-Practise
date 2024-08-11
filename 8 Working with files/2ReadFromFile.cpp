//Opening a file and reading from it.
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string str2;                        // Creating a variable to store string brought from the file
    ifstream obj2("sample.txt");        // Here we are opening a file using constructor method.

    // obj2>>str2;                      // Brought string from file and stored it to variable str2. But this will only store the 1st word
    getline(obj2, str2);                // To get the complete line stored in a file we use getline() . But this will store only 1 line in file , duplicate this command mulitple times to read multiple lines
    
    cout<<str2;                         // Printing value stored in str2. Works like "cin"


    return 0;
}