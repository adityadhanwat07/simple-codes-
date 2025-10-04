#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "x = " << x << ", y = " << y << endl;

    float a = 1.5, b = 2.5;
    swapValues(a, b);
    cout << "a = " << a << ", b = " << b;
    return 0;
}
