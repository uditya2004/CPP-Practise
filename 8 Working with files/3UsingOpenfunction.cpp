#include <iostream>
#include <fstream>
using namespace std;

//Write into the file and open the file using "Open()"
// int main() {
//     ofstream obj1;         
//     obj1.open("smpl.txt");   

//     obj1<<"Uditya is a good boy";

//     obj1.close();

//     return 0;
// }

//=======================================================
//Read from the file and open the file using "Open()"
int main() {
    ifstream obj2;
    obj2.open("smpl.txt");

    string data;     //created a variable to store data
    getline(obj2, data);

    cout<<data;

    obj2.close();
    return 0;
}