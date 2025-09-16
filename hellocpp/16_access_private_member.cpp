//
//  16_access_private_member.cpp
//  hellocpp
//
//  Created by anshul jangid on 15/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

class circle{
private:
    double radius ;
    
public:
    double getRadius(){
        return radius;
    }
    void setRadius(double val){
        radius = val;
    }
    double compute_area(){
        return 3.141 * radius * radius ;
    }
};

int main(){
    circle c1;
    c1.setRadius(4);
    cout<< " area of circle : " << c1.compute_area() <<endl;
    
    cout<<c1.getRadius() << "radius of circl" << endl;
    
}
