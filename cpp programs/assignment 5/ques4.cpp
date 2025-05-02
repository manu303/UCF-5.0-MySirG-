//write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include <iostream>
using namespace std;

// Function to find the maximum of two integers
int max(int a, int b) {
    cout << "Called max(int, int)" << endl;
    return (a > b) ? a : b;
}

// Function to find the maximum of two floating-point numbers
float max(float a, float b) {
    cout << "Called max(float, float)" << endl;
    return (a > b) ? a : b;
}

// Function to find the maximum of an integer and a float
float max(int a, float b) {
    cout << "Called max(int, float)" << endl;
    return (a > b) ? a : b;
}

// Function to find the maximum of a float and an integer
float max(float a, int b) {
    cout << "Called max(float, int)" << endl;
    return (a > b) ? a : b;
}

// Optional: Function to find the maximum of a double and a double
double max(double a, double b) {
    cout << "Called max(double, double)" << endl;
    return (a > b) ? a : b;
}

int main() {
    // Test with two floats
    float num1_float, num2_float;
    cout << "Enter two floating-point numbers: ";
    cin >> num1_float >> num2_float;
    cout << "Maximum of " << num1_float << " and " << num2_float << " is: " 
         << max(num1_float, num2_float) << endl;
    
    // Test with two integers
    int num1_int, num2_int;
    cout << "\nEnter two integer numbers: ";
    cin >> num1_int >> num2_int;
    cout << "Maximum of " << num1_int << " and " << num2_int << " is: " 
         << max(num1_int, num2_int) << endl;
    
    // Test with mixed types (int and float)
    cout << "\nEnter an integer and a float: ";
    cin >> num1_int >> num2_float;
    cout << "Maximum of " << num1_int << " and " << num2_float << " is: " 
         << max(num1_int, num2_float) << endl;
    
    // Test with mixed types (float and int)
    cout << "\nEnter a float and an integer: ";
    cin >> num1_float >> num2_int;
    cout << "Maximum of " << num1_float << " and " << num2_int << " is: " 
         << max(num1_float, num2_int) << endl;
    
    // Optional: Test with two doubles
    double num1_double, num2_double;
    cout << "\nEnter two double numbers: ";
    cin >> num1_double >> num2_double;
    cout << "Maximum of " << num1_double << " and " << num2_double << " is: " 
         << max(num1_double, num2_double) << endl;
    
    return 0;
}