//
//  36_function_over_riding.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class animal{
public:
    // If a base class pointer points to a derived class object, the derived version will be called.
    virtual void speak(){
        cout<< "animal sound \n" ;
    }
    
};

class dog : public animal{
public:
    // This ensures it replaces the base class’s speak() and the compiler checks correctness.
    void speak() override{
        // -----------------------imp---------------------
        //using override is recommended not necessary .
        
        // Once the base class marks speak() as virtual, any derived class that defines a function with the same signature automatically overrides it — whether or not you explicitly write override.
        
        // this will also be a virtual function which is over ridden .
        cout<< "dog barks \n" ;
        
    }
};
int main(){
    animal *a ; // base class pointer
    dog d;
    
    a = &d ;// base class pointer to derived object.
    a->speak(); // dog barks .
    
    
//    a is a base class pointer, but it points to object d.
//    Inside object d, there is a hidden vptr.
//    That vptr points to the dog’s vtable.
//    a->speak() means:
//    Look at a (points to d) → check d’s vptr.
//    vptr points to dog vtable.
//    Call the function pointer stored in dog’s vtable → dog::speak.
//    Hence output: "dog barks".
    
    return 0 ;
    
    
}
