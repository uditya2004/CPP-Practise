#include <iostream>
#include <stack>          //Including header file "stack"

using namespace std;

int main() {
    stack<int> myStack;

    // User makes changes
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Accessing the top element
    myStack.top();

    //Removing the top element of the stack
    myStack.pop();

    //Finding the size
    cout<<"size: "<<myStack.size()<<endl;

    return 0;
}
