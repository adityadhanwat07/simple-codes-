#include <iostream>
using namespace std;

class Area {
public:
    float calc(float r) { return 3.1416 * r * r; }
    float calc(float l, float w) { return l * w; }
    float calc(float b, float h, int t) { return 0.5 * b * h; }
};

int main() {
    Area a;
    cout << "Circle Area = " << a.calc(5.0f) << endl;
    cout << "Rectangle Area = " << a.calc(4.0f, 6.0f) << endl;
    cout << "Triangle Area = " << a.calc(3.0f, 7.0f, 1);
    return 0;
}
