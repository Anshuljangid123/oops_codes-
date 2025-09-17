//
//  44_name_hiding.cpp
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
        cout<< "base class show() ." << endl;
        // gets hidden
    }
    void display(int x){
        cout<< "base display() .  x = " << endl;
        // gets hidden.
        // we can make it visible using <using> keyword. in the derived class.
        
    }
};

class derived : public base{
public:
    // name hiding can be prevented
    // by <using> keyword
    using base:: display ;
    // prevent hiding of base  display(int) function .
    
    void show(){
        cout<< "derived show() ." << endl;
    }
    void display(double y){
        cout<< "derived display() ." << " y = ..." << y  << endl;
    }
};
int main(){
   
    //name hiding : when a derived class declares a function whit the same name as a function in base class , the base class version gets hidden  , (even if the signatures are different);
    derived d;
    d.show(); // calls derived:: show();
    d.display(3.141); // calls derived :: display();;
    
    
    d.display(4); // this is hidden base :: display() is hidden.
    // it will treat 4 as doble
    
    return 0 ;
}
