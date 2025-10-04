#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void setX(int a) { x = a; }
    friend void showSum(A, B);
};

class B {
    int y;
public:
    void setY(int b) { y = b; }
    friend void showSum(A, B);
};

void showSum(A a, B b) {
    cout << "Sum = " << a.x + b.y;
}

int main() {
    A a;
    B b;
    a.setX(5);
    b.setY(10);
    showSum(a, b);
    return 0;
}
