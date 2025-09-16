//
//  static_member_inheritance.cpp
//  hellocpp
//
//  Created by anshul jangid on 14/09/25.
//

#include<iostream>
using namespace std;

class Base{
public:
    static int count ; // declaration inseid the class , no memory allocated to this static memebte as of now
};

int Base:: count = 0 ; // defination and optional initialization leads to the memory allocation , hence avoiding linker error.

class Derived: public Base{};

int main(){
    Base :: count = 5 ;
    cout<< Derived:: count<< endl;// op 5 ; // scope resolution operator .
    
    
    Derived::count++;
    cout<< Base::count << endl; // op 6
    
    return 0 ;
    // both base::count and Derived::count points to the same memory locaiton
    
}
