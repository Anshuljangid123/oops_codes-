//
//  31_explicit_keyword.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class celcius{
public:
    // stop automaitc type conversion .
    explicit celcius(double temp){
        cout<< temp << "\t degree Celcius " << endl;
    }
    
};
int main(){
    // explicit keyword prevent the compiler from automatically converting types when calling a constructor with one argument.
    celcius(37.5);
    
    //celcius c  = 37.5 ;// error; no viable conversion from double to celcius.
    return 0 ;
    
}
