//
//  37_composition_instead_of_inheritance.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class engine{
public:
    void start(){
        cout<< "engine started" << endl;
    }
};

class car{
private:
    
    engine e;
    // composition insetead of inheritance.
public:
    void drive(){
        e.start();
        cout<< "car is moving" << endl;
    }
};

int main(){
    car c1;
    c1.drive();
    
    
    return 0 ;
    
}
