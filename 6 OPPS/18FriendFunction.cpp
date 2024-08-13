//Finding mean of 2 numbers

#include <iostream>
using namespace std;

class Sample {
	  int a,b;
	  
public:
    void input() {
        cout<<"Enter two number: ";
        cin>>a>>b;
    }

    friend float mean(Sample& m);

};

//Friend Function
float mean(Sample& m) {
    return ((m.a + m.b)/2.0);
}


int main() {
    Sample obj;

    cout<<"mean: "<<mean(obj)<<endl;

	return 0;
}