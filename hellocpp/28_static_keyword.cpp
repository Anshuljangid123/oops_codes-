//
//  28_static_keyword.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class student{
public:
    // static data member in class
    static int count1; // only one copy exist.
    student(){
        count1++;
    }
    
};

class maths{
public:
    // static member function .
    static int square(int x){
        return x * x;
    }
};

int student::count1 = 0 ;

void counter(){
    static int count = 0 ;
    // used when we want to rememeber a value across calls without making it global.
    count++;
    cout<< count << "\t" ;
 }
int main(){
    cout<< "understanding static keyword \n" ;
    
    for(int i = 0 ; i< 5 ; i++){
        counter();
    }
    cout<< endl;
    
    student s1 , s2 , s3  , s4; // all can access count1;
    cout<< "analysis count1 \n" ;
    cout<< s1.count1 << endl; // op 3
    cout<< s2.count1 << endl;
    
    maths m1;
    cout<<"prining square " << m1.square(5) << endl;
    cout<< "static member function belongs to the class not to the object \t" << maths::square(4) << endl;
}
