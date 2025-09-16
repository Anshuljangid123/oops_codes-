//
//  8_can_virtual_func_be_private.cpp
//  hellocpp
//
//  Created by anshul jangid on 29/06/25.
//
#include<iostream>
using namespace std;

class Base {
private:
    virtual void show() {
        cout << "Base show()" << endl;
    }

    friend class Derived;  // optional, to allow access
};

class Derived : public Base {
public:
    void show() override {  // can override even if base's version is private
        cout << "Derived show()" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    // ptr->show(); ❌ Error: show() is private in Base
    //ptr->show();
    Derived* ptr2 = new Derived();
    ptr2->show();
    delete ptr;
}

