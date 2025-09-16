//
//  6_func_override.cpp
//  hellocpp
//
//  Created by anshul jangid on 26/06/25.
//


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {  // virtual: enables overriding
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {  // overrides base class function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;   // base class pointer
    Dog d;
    cout<< a << endl;
    a = &d;
    cout<< a <<endl;
    //cout<< a->speak() << end;
    a->speak();  // Output: Dog barks

    return 0;
}
