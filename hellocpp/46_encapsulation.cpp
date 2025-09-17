//
//  46_encapsulation.cpp
//  hellocpp
//
//  Created by anshul jangid on 17/09/25.
//
#include <stdio.h>
#include<iostream>
using namespace std;

class student{
private:
    string name;
    int roll ;
    float marks;
    
public:
    student(string name , int roll , float marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
    
    string getName() const{
        return name ;
    }
    
    void setName(string name){
        if(!this->name.empty()){
            name = this->name;
        }
        else{
            cout<< "invalid name" << endl;
        }
    }
    
    int getRoll(int roll){
        if(roll > 0 ) return this->roll = roll;
        else{
            cout<< "invalid roll num" << endl;
        }
        return -1 ;
    }
    void setMarks(float m){
        if(m <=100 && m >0 ){
            marks = m ;
        }
        else{
            cout<< "marks is : " << " zero " << endl;
        }
    }
    void display() const{
        cout<< name ;
        cout<< endl << roll <<endl;
        cout<< marks << endl;
    }
};
int main(){
    student s1("anshul", 15, 99.99);
    s1.setMarks(90);
    s1.setName("shruti");
    s1.display();
   
    
    return 0 ;
}
