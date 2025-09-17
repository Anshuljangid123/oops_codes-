//
//  38_single_inheritance.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class animal{
public:
    void eat(){
        cout<< "animal eat" << endl;
    }
};

class dog : public animal{
public:
    void bark(){
        cout<< "dog barks" << endl;
        
    }
};
int main(){
    dog d1;
    
    d1.eat();
    d1.bark();
    
    return 0 ;
}
