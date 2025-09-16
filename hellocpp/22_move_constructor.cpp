//
//  22_move_constructor.cpp
//  hellocpp
//
//  Created by anshul jangid on 15/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class myClass{
private:
    int b ;
public:
    myClass(int &&a) : b(std::move(a)){
        cout<< "move constructor called" << endl;
    }
    
    void display(){
        cout<< b << "printing b " << endl;
    }
};


int main(){
    int a = 4 ;
    myClass obj1(std::move(a));
    // move constructor is like the copy constructor
    // which create an object from already existing object of the same class
    // but
    // instead of copying the object in the new memoy ,
    // it makes use of move semantics ,
    // to transfer the ownership of already created object to the new object without creating extra copies.
    
    obj1.display(); 
    
    return 0 ;
}
