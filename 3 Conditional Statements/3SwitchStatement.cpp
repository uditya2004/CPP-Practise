#include <iostream>
using namespace std;

// Program to print Monday for 1 , Tuesday for 2 , Wednesday for 3... so on.
// int main() {
//     int day;
//     cout<< "Enter day number: ";
//     cin>> day;

//     // Switch statement is a cleaner way to write if statements , if "if statements" are having many conditions.

//     //SYNTAX: switch(variable) {   ->> we put variable inside switch for which we want to check the multiple cases.

//     switch(day) {
//         case 1 : cout<<"Monday"<<endl;      // It says " if day is 1 , print Monday"
//                  break;                     // After printing monday , we want to exit the switch statement block.
        
//         case 2 : cout<<"Tuesday"<<endl;
//                  break;
        
//         case 3 : cout<<"Wednesday"<<endl;
//                  break;
        
//         case 4 : cout<<"Thursday"<<endl;
//                  break;
        
//         case 5 : cout<<"Friday"<<endl;
//                  break;

//         case 6 : cout<<"Saturday"<<endl;
//                  break;
        
//         case 7 : cout<<"Sunday"<<endl;
//                  break;
        
//         default : cout<<"Invalid"<<endl;  // if none of the above cases is matched then default statement is run.

//     }
//     return 0;
// }


//========================
//Build Calculator using Switch statement
int main() {
    double num1 , num2;
    int choice;

    cout<< "Enter 1st number: ";
    cin>> num1;

    cout<< "Enter 2nd number: ";
    cin>> num2;

    cout<< " \n1. Multiplication \n2.Division \n3.Addition \n4.Substraction \n \nEnter You choice: ";
    cin>> choice;

    switch(choice) {
        case 1 : cout<<"Multiplication is: "<<num1*num2;
                break;

        case 2 : cout<<"Division is: "<<num1/num2;
                break;
        
        case 3 : cout<<"Addition is: "<<num1+num2;
                break;
        
        case 4 : cout<<"Substraction is: "<<num1-num2;
                break;
        
        default : cout<<"Invalid choice";
    }

    return 0;
}