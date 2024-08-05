 class B {
 public:
    B(int x) {

    }

};

 class D : public B {
 public:
    // Constructor in D to initialize B
    D(int x) : B(x) {}
 };

 int main() {
    D obj(10);
    return 0;
 }