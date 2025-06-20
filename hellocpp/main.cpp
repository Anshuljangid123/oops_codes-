//
//  main.cpp
//  hellocpp
//
//  Created by anshul jangid on 09/06/25.
//

#include <iostream>
#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class car{
public:
    string name ;
    vector<string> color;
    car(string name , vector<string> color){
        this->name = name ;
        this->color = color;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    // create a honda car object
    vector<string> honda_colors = {"red" , "blue"};
    car honda = car("honda" , honda_colors);
    
    // deep copy of honda
    car deepcopy_honda = honda;
    deepcopy_honda.color.push_back("green");
    
    cout<<"deep copy : " << endl;
    // does not change the original one
    
    
    for(string color : deepcopy_honda.color){
        cout<< color << "\t";
    }
    cout<<endl;
    cout<< "original " << endl;
    for(string color : honda.color){
        cout<< color << "\t";
    }
    
    
    //  shallow copy
    car* copy_honda = &honda;
    copy_honda->color.push_back("yellow");
    
    cout<< ".......shallow copy ........"<< endl;
    // changes the original one
    
    for(string color : copy_honda->color){
        cout<<color << "\t" ;
    }
    cout<< endl;
    cout<< "original " << endl;
    for(string color : honda.color){
        cout<< color << "\t";
    }
    
    
    return 0;
}
