//
//  41_hierarchical_inheritance.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//



#include <stdio.h>
#include<iostream>
using namespace std;

class a{
public:
    void class_a(){
        cout<< "i am class a" << endl;
    }
};


class b : public a{
public:
    void class_b(){
        cout<< "i am class b" << endl;
    }
};


class c : public a{
public:
    void class_c(){
        cout<< "i am class c" << endl;
    }
};


class d: public a{
public:
    void class_d(){
        cout<< "i am class d" << endl;
    }
};

int main(){
    
    d obj_d ;
    obj_d.class_a();
   
    
    return 0 ;
}
