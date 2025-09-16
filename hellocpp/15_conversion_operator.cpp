//
//  15_conversion_operator.cpp
//  hellocpp
//
//  Created by anshul jangid on 15/09/25.
//

#include <stdio.h>
#include <iostream>

using namespace std ;

class fraction{
private:
    
    int num ;
    int den ;
public:
//    fraction(int n = 0 , int d = 1){
//        num = n ;
//        den = d;
//    }
    fraction(int n = 0 , int d  =1 ) : num(n) , den(d){}; // constructor initializer list
    
    operator float() const{
        return float(num) / float(den);
    }
};

int main(){
    
    fraction f(2,4);
    float val = f ;
    
    cout<< val << endl;
    
    return 0 ;
}
