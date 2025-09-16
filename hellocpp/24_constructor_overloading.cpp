//
//  24_constructor_overloading.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class person{
public:
    string name ;
    int age;
    
    person(){
        name : "unknown" ;
        age = 0 ;
        cout<< "default constructor \n" ;
    }
    person(string s, int a){
        name = s;
        age = a ;
        cout<< "parameterised constructor" << endl;
    }
    person(const person& p){
        name = p.name ;
        age = p.age;
        cout<< "copy constructor \n" ;
    }
    void display(){
        cout<< "name : " << name << endl << "age : " << age << endl;
    }
};
int main(){
    person p1 ;
    person p2("anshul" , 22) ;
    person p3 = p2;
    
    p1.display();
    p2.display();
    p3.display();
    
}
