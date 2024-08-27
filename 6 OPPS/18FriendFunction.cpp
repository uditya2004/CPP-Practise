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

//=========================

#include <iostream>
using namespace std;

class Demo {
    int a,b;
public:
    Demo(int val1, int val2){
        a = val1;
        b = val2;
    }
    friend void display(Demo &m);
};

void display(Demo &m){
    cout<<m.a<<" "<<m.b<<endl;
}

int main() {
    Demo obj1(1,2);

    display(obj1);

    return 0;
}