#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square = " << square(n);
    return 0;
}
