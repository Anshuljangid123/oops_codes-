//
//  21_copy_constructor.cpp
//  hellocpp
//
//  Created by anshul jangid on 15/09/25.
//

#include<iostream>
using namespace std;

class A{
public:
    int val;
    A(int x){
        
        val = x;
    }
    
    A(A& a){
        val = a.val;
    }
};

int main(){
    // copy constructor are the member functions that initialize an object using another object of the same class.
    // copy constructor takes the reference to an object of the same class as an argument
    A a1(20);
    A a2(a1); // call for the copy
    
    cout<< a2.val << "using copy constructor" << endl;
    //op -> 20 
    
}
