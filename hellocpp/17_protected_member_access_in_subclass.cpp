//
//  17_protected_member_access_in_subclass.cpp
//  hellocpp
//
//  Created by anshul jangid on 15/09/25.
//

#include <stdio.h>

#include <stdio.h>
#include<iostream>
using namespace std;

class parent{
protected:
    int id_protected;
    
};

class child: public parent{
public:
    void setId(int id){
        id_protected = id;
    }
    int getId(){
        return id_protected;
    }
};

int main(){
    child c1;
    c1.setId(21);
    
    // acess the protected member outside the class using the derived class.
    
    cout<<c1.getId()<< endl;
}
