
#include<iostream>
using namespace std;

class Complex {
    
private:
    int real;
    int imag;
    
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    
    void print() {
        cout << real << " + " << imag << "i" << "\n";
    }
    
    friend Complex operator+(const Complex& obj1, const Complex& obj2);
    
};

Complex operator+(const Complex& obj1, const Complex& obj2) {
    
    return Complex(obj1.real + obj2.real, obj1.imag + obj2.imag);
    
};

int main() {
    Complex c1(10, 5), c2(5, 10);
    Complex c3 = c1 + c2;
    
    c3.print();  // 15 + 15i
    
    return 0;
}

