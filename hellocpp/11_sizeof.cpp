//
//  11_sizeof.cpp
//  hellocpp
//
//  Created by anshul jangid on 14/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

int main(){
    cout << "called on data type  -> "<< sizeof(int) << endl;
    
    double x = 11.002;
    cout<< "called on variable ->  " << sizeof(x) << endl;
    return 0 ;
}
