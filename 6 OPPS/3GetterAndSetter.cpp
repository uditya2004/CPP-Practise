/*
We can't access private attributes and methods in main() function directly . But if we were to access it indirectly we use Getter and Setters method.

Setter- used to set the value of private attribute
SYNTAX eg: 
void setCLASS_NAME(int cgpa){

}

------------------
Getter- is used to return a value 
SYNTAX eg: 
void getCLASS_NAME(){

}

*/

#include <iostream>
using namespace std;

class Student {
    string name;
    float cgpa;

public:
    void getPercentage() {
        cout<<(cgpa*10)<<" % \n";
    }

    //Setter
    void setName(string NameVal) {
        name= NameVal;
    }

    void setcgpa(float cgpaVal) {
        cgpa= cgpaVal;
    }

    //Getter
    string getName() {
        return name;
    }

    float getcgpa() {
        return cgpa;
    }

};

int main() {
    Student stu1;
    
    stu1.setName("Uditya");
    stu1.setcgpa(9.5);

    cout<<stu1.getName()<<endl;
    cout<<stu1.getcgpa()<<endl;

    return 0;
}