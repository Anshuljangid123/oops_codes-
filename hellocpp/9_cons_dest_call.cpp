//
//  9_cons_dest_call.cpp
//  hellocpp
//
//  Created by anshul jangid on 02/07/25.
//

#include<iostream>
using namespace std ;

class Base {
public:
    Base() { cout << "Base constructor\n"; }
    ~Base() { cout << "Base destructor\n"; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};


int main(){
    Base b1 ;
    Derived d1 ;
    /*
     Base class constructor is called before derived class constructor
     Destructors are called in reverse order.
     */
}
