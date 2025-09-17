//
//  35_unary_operator_overloading.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>

using namespace std;

class point{
private:
    int x , y ;
    
public:
    point(int x = 0 , int y = 0 ) : x(x) , y(y){};
    
    // overloading unary - operator;-> do not required any operand to perform operation.
    point operator - () const{
        return point(-x , -y);
    }
    
    void display() const{
        cout<< "(" << x << "," << y << ")" << endl;
    }
};

int main(){
    // compile time polymorphism .
    
    point p1(3,-1);
    point p2;
    
    p1.display();
    
    p2 = -p1;
    
    p2.display();
    // it will return the negated values.
    
}

// operators which cannot be overloaded
// ::
// .
// .*
// sizeof
// typeid
// ?:
// alignof
// Noexcept
