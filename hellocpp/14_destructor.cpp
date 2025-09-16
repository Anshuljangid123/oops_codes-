//
//  14_destructor.cpp
//  hellocpp
//
//  Created by anshul jangid on 15/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class myClass{
private:
    int* data;
    // pointer to the dynamically allocated memory .
public:
    myClass(int val){
        data  = new int;
        *data = val;
        cout<< "data val " << *data << endl;
    }
    ~myClass(){
        delete data ;
        cout<< "destructor called. " << endl;
    }
};

int main(){
    
    myClass obj1(10);
    
    
    return 0 ;
}
