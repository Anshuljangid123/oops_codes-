//
//  34_operator_overloading.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

// operator overloading .
class Complex{
public:
    int real , imag;
    
    Complex(int r , int i) : real(r) , imag(i){} ;
    // we use initializer list so that we can initialize the data members before calling the class constructor body
    
    Complex operator + (const Complex &other){
        return Complex(real + other.real , imag + other.imag);
    }
    void print(){
        cout<< real << " + " << imag << "i" << endl;
    }
};

class student{
public:
    int id ;
    student(int i) : id(i){};
    
    bool operator == (const student & s1) const{
        return id == s1.id;
    }
};


int main(){
    Complex c1(3 , 4);
    Complex c2( 7 , 6);
    
    Complex c3 = c1 + c2;
    //  same interface behaves differently  depending on the object using it .
    
    c3.print();
    
    student s2(1);
    student s3(1);
    
    if(s2 == s3){
        cout<< "same students" << endl;
    }
    
    
    
    
    return 0 ;
}
