//
//  copy_constructor.cpp
//  hellocpp
//
//  Created by anshul jangid on 13/06/25.
//

#include<iostream>
using namespace std;

class Test{
public:
    Test() {}
    /**
     This is the parameter list.
     It means the constructor takes a reference to a const Test object.
     Let's break this further:
     const: Ensures that the passed object t won’t be modified inside this function.
     Test&: Passing by reference avoids unnecessary copying (which would be inefficient).
     t: The name of the parameter — it's the object being copied.
     */
    Test(const Test &t){
        cout<<"copy constructor called"<<endl;
    }
    Test &operator = (const Test& t){
        cout<< "assignmenet operator called" << endl;
        return *this;
    } 
};

int main(){
    Test t1 , t2;
    t2 = t1; // t1 is t
    Test t3 = t1;
    getchar();
    return 0 ;
}
