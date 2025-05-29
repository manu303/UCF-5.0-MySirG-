/*
in ques2,Write a non member function in which initiate Complex class dynamically.Initialise instance variables and display their values.
*/
#include <iostream>

using namespace std;

class Complex {
private:
    int a, b;

public:
    
    Complex(int real = 0, int imag = 0) : a(real), b(imag) {}

    
    void display() const {
        cout << a << "+i(" << b << ")" << endl;
    }

    
    friend void initiateAndDisplayComplex(int, int);
};


void initiateAndDisplayComplex(int real_part, int imag_part) {
    
    Complex *ptr = new Complex(real_part, imag_part); 

    
    cout << "Dynamically created Complex number: ";
    ptr->display(); 

    
    delete ptr;
    ptr = nullptr; 
}

int main() {
    
    initiateAndDisplayComplex(5, 7); 
    initiateAndDisplayComplex(-2, 10); 

    return 0;
}