// Access Specifiers
// 1. Public
// 2. Protected
// 3. Private

#include<iostream>
using namespace std;
class Parent{

public:
    int x;

protected:
    int y;

private:
    int z;

};

class Child1: public Parent{
    // x will remain public
    // y will remain protected
    // z will be inaccessible
};

class Child2: private Parent{
    // x will be private
    // y will be private
    // z will be inaccessible
};

class Child3: protected Parent{
    // x will be protected
    // y will be protected
    // z will be inaccessible
};

int main(){
    Parent p;
    p.x=1;
}