//
//  45_overloading_with_inheritance.cpp
//  hellocpp
//
//  Created by anshul jangid on 17/09/25.
//
#include <stdio.h>
#include<iostream>
using namespace std;

class base{
public:
    void show(){
        cout<< "base show " << endl;
    }
    void show(int n){
        cout<< "n = " << n << endl;
    }
};

class derived : public base{
public:
    using base:: show; // to avoid name hiding
    void show(double y){
        cout<< "y = " << y << endl;
    }
};
int main(){
    // using overloading with inheritance.
    
    derived d;
    d.show();
    d.show(10);
    d.show(20.012);
    
    
    return 0 ;
}
