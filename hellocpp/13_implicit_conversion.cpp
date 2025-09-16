//
//  13_implicit_conversion.cpp
//  hellocpp
//
//  Created by anshul jangid on 14/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class Complex{
private:
    double real;
    double imag;
    
public:
    Complex(double r = 0.0 , double i = 0.0) : real(r) , imag(i){}
    // a overloaded method to compare two complex number
    bool operator == (Complex obj){
        return (real == obj.real && imag == obj.imag);
    }
};

int main(){
    
    // a complex object .
    Complex com1(3.0, 3.0);
    
    if(com1 == 3.0){
        cout<< "same : \n" ;
    }
    else{
        cout<< "not same \n" ;
    }
    
    return 0 ;
}
