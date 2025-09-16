//
//  27_user_defined_destructor.cpp
//  hellocpp
//
//  Created by anshul jangid on 16/09/25.
//

#include <stdio.h>
#include<iostream>
using namespace std;

// user defined destructor .
class myArray{
private:
    int *arr;
    int size;
    // if a class uses new , malloc then use delete or free in the destructor (user defined destructor);
    
public:
    myArray(int s){
        size = s;
        arr = new int[size]; // dynamically allocated memory .
        cout<< "constructor allocated array of size "<< size << endl;
    }
    ~myArray(){
        // user defined destructor.
        delete []arr;// free memeroy
        cout<< "user defined destructor to free the memory ." << endl;
    }
    //method to set value
    void setValue(int index , int val){
        if(index >= 0 && index < size ){
            arr[index] = val;
        }
    }
    // method to display the array
    void display(){
        for(int i = 0 ; i< size ; i++){
            cout<< arr[i] << "\t" ;
        }
        cout<< endl;
    }
};
int main(){
    myArray obj_arr(5); // 5 size array . // constructor allocated array of size = 5 ;
    
    obj_arr.setValue(0, 10);
    obj_arr.setValue(1, 20);
    obj_arr.setValue(2, 30);
    obj_arr.setValue(3, 40);
    obj_arr.setValue(4, 50);
    
    obj_arr.display();
    
    
    return 0 ;
    
}
