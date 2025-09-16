//
//  18_friend_func.cpp
//  hellocpp
//
//  Created by anshul jangid on 15/09/25.
//

#include <stdio.h>

#include <stdio.h>
#include<iostream>
using namespace std;

class box{
private:
    int width;
public:
    box() : width(10){};
    
    friend void printWidth(box b1); //
    // a non mber funciton that can access the priate and protected member of the class.
};

void printWidth(box b1){
    cout<< b1.width << " ->using friend function" << endl;
}


int main(){
    box b2;
    printWidth(b2);

}
