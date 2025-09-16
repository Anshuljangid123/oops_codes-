//
//  32_const_keyword.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;


int main(){
    const int x = 10 ;
    //x = 20 ;// error
    
    int y = 20 ;
    
    const int *ptr = &x;
    // we cannot change the value at the address of x . (i.e.) we cannot chage x .
    //*ptr = 20; // error
    
    ptr = &y ; // ptr can be changed
    
    
    //int *const ptr2 = &x ;
    
    const int * const ptr3 = &x ;
    
}
