/*
Create a User class with properties : id (private), username(public) & password (private).
Its id should be initialized in a parameterised constructor.
It should have a Getter & Setter for password.
*/
#include <iostream>
using namespace std;

class User {
    int id;
    string password;

public:
    string username;

    User(int idValue) {
        id=idValue;
    }

    //setter
    void setpassword(string password) {
        this->password = password;
    }

    //getter
    string getpassword() {
        return password;
    }
};

int main() {
    User stud1(1234);

    stud1.username= "uditya204";
    cout<<"username: "<<stud1.username<<endl;

    stud1.setpassword("pass1234");
    cout<<"password: "<<stud1.getpassword()<<endl;


    return 0;
}