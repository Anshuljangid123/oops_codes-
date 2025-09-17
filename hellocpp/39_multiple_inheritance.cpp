//
//  39_multiple_inheritance.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//


#include <stdio.h>
#include<iostream>
using namespace std;

class teacher{
public:
    void teach(){
        cout<<"teaching \n" ;
    }
};

class artist{
public:
    void draw(){
        cout<< "drawing \n" ;
    }
};

class person: public teacher , public artist{
    // multiple inheritance.
public:
    void iAmPerson(){
        cout<< "i am a teacher as well as artist \n" ;
    }
};

int main(){
    person p1;
    p1.iAmPerson();
    // multiple inheritance.
    
    p1.draw();
    p1.teach();
    
    return 0 ;
}

