//
//  4_this_keyword_ex.cpp
//  hellocpp
//
//  Created by anshul jangid on 23/06/25.
//

#include<iostream>
using namespace std;

class Student ;

class Exam{
public:
    void compare(Student* s1 , Student* s2);
};

class Student{
public:
    string name ;
    int marks ; // class members
    Student(string s , int m){
        name = s ;
        marks = m;
    }
    
    void compareWith(Student& other , Exam& exam){
        exam.compare(this , &other);
        cout<< "passing the (current object) to the Exam:compare" << endl;
        cout<< "value of this is : -> " << (this) << endl;
    }
};

void Exam :: compare(Student* s1 , Student* s2){
    if(s1->marks > s2->marks){
        cout<< s1->name << "score high than " << s2->name  << endl;
    }
    else if(s1->marks < s2->marks){
        cout<< s2->name << "score high than " << s1->name  << endl;
    }
    else{
        cout<< "both scored equeal" << endl;
    }
}

int main(){
    Student a("anshul" , 100);
    Student b("parht" , 99 );
    Exam mathExam;
    
    a.compareWith(b , mathExam);
}
