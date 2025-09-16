//
//  30_final_keyword.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;


class animal final {
    // this class cannot be inherited to some other class
public:
    void speak(){
        cout<< "animal speak \n" ;
    }
};
//
//class dog : public animal{
//    // compile time error
//    
//};

class base{
public:
    virtual void show() final{
        cout<< "base show " << endl;
    }
};

class derived: public base{
public:
    
    //void show() override{
        // compile time error cannot over ride the member function of parent class which is marked final
    //}
};


int main(){
    //final keyword.
    // final keyword is used to restrict inheritance and overriding
}
