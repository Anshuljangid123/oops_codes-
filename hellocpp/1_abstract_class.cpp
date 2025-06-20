//
//  1_abstract_class.cpp
//  hellocpp
//
//  Created by anshul jangid on 20/06/25.
//
#include<iostream>
using namespace std;

class shape{
public:
    virtual void draw() = 0 ;
    void print_name(){
        cout<< "this is shape" << endl;
    }
};

class circle : public shape{
public:
    void draw() override{
        cout<< "drawing circle" << endl;
    }
};


int main(){
    circle c;
    c.draw();
    shape *s = new circle();
    s->draw();
    shape *s2 = new circle();
    s2->print_name();
}
