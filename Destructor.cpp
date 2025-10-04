#include <iostream>
using namespace std;
class Test{
public:
    ~Test(){ cout<<"Destructor called"; }
};
int main(){ Test t; }
