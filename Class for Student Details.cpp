#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void input() {
        cout << "Enter name, roll, marks: ";
        cin >> name >> roll >> marks;
    }
    void display() {
        cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
