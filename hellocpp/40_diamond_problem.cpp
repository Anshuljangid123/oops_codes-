//
//  40_diamond_problem.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//


#include <stdio.h>
#include<iostream>
using namespace std;

class a{
public:
    void greet(){
        cout<< "i am class a " << endl;
    }
};

class b : virtual public a{
public:
//    void greet(){
//        cout<< "i am class b " << endl;
//    }
};


class c : virtual public a{
public:
//    void greet(){
//        cout<< "i am class c " << endl;
//    }
};

class d : public b , public c{
public:
//    void greet(){
//        cout<< "i am class d" << endl;
//    }
};

int main(){ 
    d obj_d;
    obj_d.greet();
    
    return 0 ;
}
