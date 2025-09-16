//
//  19_friend_class.cpp
//  hellocpp
//
//  Created by anshul jangid on 15/09/25.
//


#include <stdio.h>
#include<iostream>
using namespace std;

class a{
private:
    int x = 5;
    
    friend class b;
};

class b{
public:
    void show(a obj_a){
        cout << "accessing the private data member of the friend class " <<  obj_a.x << endl;
    }
};

int main(){
    
    a obj_a ;
    
    b obj_b;
    
    obj_b.show(obj_a) ;
    
    
}

