//
//  26_vitual_destructor.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class base{
public:
    base(){
        cout<< "constructing base class " << endl;
    }
    virtual ~base(){
        cout<< "destructing base class instance" << endl;
    }
};

class derived : public base{
public:
    derived(){
        cout<< "construct derived" << endl;
    }
    ~derived(){
        cout << "destructing derived class instance" << endl;
    }
};

int main(){
    derived *d = new derived();
    // derived class pointer .
    
    base *b = d;
    // we want to delete derived class pointer using the base class pointer.
    
    delete(b);
    
    
}
