//
//  43_object_slicing.cpp
//  hellocpp
//
//  Created by anshul jangid on 17/09/25.
//




#include <stdio.h>
#include<iostream>
using namespace std;

class base{
public:
    int x = 1;
    void show(){
        cout<< "bas show : x = " << x << endl;
    }
};

class derived : public base{
public:
    int y = 2;
    void show(){
        cout<< "derived show : x = " << x << " , " << "y == " << y << endl;
    }
};

int main(){
   // object slicing occurs when a derived class object is assigned or copied to base class object and the extra data and methods in the derived class are sliced off.(lost)
    derived d;
    base b = d ; // object slicing
    d.show(); 
    
    b.show();// it did not have the function that are defined in the derived class
    return 0 ;
}
