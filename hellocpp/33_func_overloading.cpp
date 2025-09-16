//
//  33_func_overloading.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class pointer{
private:
    int num ;
    int name ;
public:
    void print(int x) {
        num = x ;
        cout<< "int \n" ;
    }
    // function overloading .
    
    void print(string s){
        s = name;
        cout<< "string \n" ;
    }
};

int main(){
    pointer p1;
    p1.print(10);
    
    pointer p2;
    p2.print("anshul");
    
    return 0 ;
}
