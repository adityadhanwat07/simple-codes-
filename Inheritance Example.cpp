#include <iostream>
using namespace std;
class Parent{
public: void greet(){ cout<<"Hello Parent"; } };
class Child: public Parent{};
int main(){ Child c; c.greet(); }
