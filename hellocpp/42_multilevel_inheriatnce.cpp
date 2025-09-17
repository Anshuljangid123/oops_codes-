//
//  42_multilevel_inheriatnce.cpp
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


class c : public b{
public:
    void class_c(){
        cout<< "i am class c" << endl;
    }
};


int main(){
    
    c obj_c ;
    obj_c.class_a();
    
    return 0 ;
}

