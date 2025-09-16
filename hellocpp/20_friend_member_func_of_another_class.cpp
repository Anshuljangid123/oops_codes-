#include <iostream>
using namespace std;
// friend member funciton of another class.


class a; // forward declaration of class a

class b {
public:
    void show_a(a obj_a); // declare here so 'a' can make it friend
};

class a {
private:
    int x = 10;

    // declare b::show_a as friend
    friend void b::show_a(a obj_a);
};

void b::show_a(a obj_a) {  // define function outside class
    cout << obj_a.x << " accessed by friend member function of another class" << endl;
}

int main() {
    a obj_a;
    b obj_b;

    obj_b.show_a(obj_a);  // allowed, can access private data of class a
    return 0;
}

