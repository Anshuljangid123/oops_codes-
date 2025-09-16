//
//  25_destructors.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class myClass{
private:
    int *data;
    // pointer to the dynamically allocated memory
    
public:
    myClass(int value){
        data = new int;
        *data = value;
        cout<< *data << endl;
    }
    ~myClass(){
        delete data;
    }
};

int main(){
    myClass obj(10);
    
    return 0 ;
}
