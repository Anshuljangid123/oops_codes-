//
//  23_virtual_constructor.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class B{
public:
    B(){
        cout<< "constructor base .  \n" ;
    }
    virtual ~B(){
        cout << "virtual destructor of the  class" << endl;
        
    }
    
};


class D : public B{
public:
    D(){
        cout<<"constructing derived" << endl;
    }
    ~D(){
        cout<< "destructing derived" << endl;
    }
};
int main(){
    // we cannot create a vitural constructor in c++;
    /**
            as c++ is statically typed language
          the compoiler need to kenow the exact type of object at the compile time
      the constructor cannot be vitual , because when a constructor of a class is executed their is no vitual ptr defined yet
     */
    
    D* derived_obj = new D();
    B* b_ptr = derived_obj;
    
    delete b_ptr;
    
    return 0 ;
    //op
    
//    constructor base .
//    constructing derived
//    destructing derived
//    virtual destructor of the  class
    
}
