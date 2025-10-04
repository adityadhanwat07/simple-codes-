#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    float salary;

    void input() {
        cout << "Enter id and salary: ";
        cin >> id >> salary;
    }
    void display() {
        cout << "ID: " << id << "\nSalary: " << salary;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}
