//
//  29_abstract_class.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class shape{
    // abstract class-> atleast 1 pure virtual function should exist in this class.
public:
    virtual void draw() = 0 ; // pure virtual function
    // class that inherit from this abstract class must implement draw() in it .
    void print_name(){
        cout<< "this is shape" << endl;
    }
};

class circle : public shape{
public:
    void draw() override{
        cout<< "drawing circle \n" ;
    }
};

int main(){
//    shape s1 ;
//    cout<< s1.print_name << endl;
    // we cannot create an object of abstract class.
    
    circle c1 ;
    c1.draw(); // drawing circle
    
    shape *s1 = new circle();
    s1->draw(); // drawing circle.
    
    //delete s1;
    
}
