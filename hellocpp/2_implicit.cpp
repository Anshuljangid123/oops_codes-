//
//  2_implicit.cpp
//  hellocpp
//
//  Created by anshul jangid on 20/06/25.
//
#include<iostream>
using namespace std;

class Meter {
public:
    Meter(int m) { // parameterised constructor with int type parameter
        cout << m << " meters\n";
    }
};


void printDistance(Meter d) {
    // takes a Meter object
}

int main() {
    printDistance(10);  // 👈 Works, but converts int → Meter automatically!
}
