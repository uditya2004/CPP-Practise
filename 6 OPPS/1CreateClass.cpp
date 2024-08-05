/*
SYNTAX

class CLASS_NAME {
    
};

*/

#include <iostream>
using namespace std;

// class Student {
//     //Properties
//     string name;
//     float cgpa;

//     //method
//     void getPercentage() {
//         cout<<(cgpa * 10)<<"%"<<endl;
//     }

// };

// int main() {
//     Student obj1;  //object
//     cout<<sizeof(obj1)<<endl;  //printing the size allocated to the object created

//     return 0;
// }

//=====================================

class Instagram {
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"Deactivated"<<endl;
    }

    void editbio(string newBio) {
        bio = newBio;
        cout<<"New bio"<<bio<<endl;
    }
};

int main() {
    Instagram user1;

    return 0;
}