#include <iostream>
#include <vector>      //Including header file "vector"

using namespace std;


// Displaying all grades
void Display( vector<int>  &grades ){

    for (int i=0 ; i<grades.size(); i++) {         //grades.size() gives the size of vector. Index of last element = size -1.
        cout<< grades[i]<< " ";
    }
}


int main() {
    vector<int> grades;     // We created an object "grades" for the template class vector.

    // Adding grades at the end of the vector
    grades.push_back(85);          
    grades.push_back(90);
    grades.push_back(78);
    grades.push_back(99);
    
    Display(grades);   //Output: 85 90 78 99 

    //Deleting grades from the end of vector
    grades.pop_back();
    cout<<endl;
    Display(grades);   //Output: 85 90 78 

    //Finding the size 
    cout<<"size: "<<grades.size()<<endl;

    // Accessing grades
    cout << "First student's grade: " << grades[0] <<endl;       //Can Directly access elements through index " grades[0] "
    
    // Modifying a grade
    grades[1] = 92;

    //Removing 3th element
    grades.erase(grades.begin()+2);     //grades.begin -> give access to 1st element
    Display(grades);

    return 0;
}
