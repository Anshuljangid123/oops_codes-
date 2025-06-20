//
//  virtual_constructor.cpp
//  hellocpp
//
//  Created by anshul jangid on 14/06/25.
//


#include<iostream>
using namespace std;
class b{
public:
    b(){
        cout<< "custructing base " << endl;
    }
    virtual ~b(){
        cout<< "destructing base"  << endl;
    }
};

class d : public b {
    // polymorphism
public:
    d(){
        cout<< "constructing derieved" << endl;
    }
    ~d(){
        cout<< "destructing derieved \n";
    }
};

int main(){
    d *derived = new d();
    b *bptr = derived;
    delete bptr;
    
    return 0 ;
}
