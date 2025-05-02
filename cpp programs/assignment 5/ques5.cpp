//write functions using function overloading to find a sum of two numbers and both the numbers have different data types.
#include <iostream>
using namespace std;

// Function to find the sum of two numbers (int, float)
float sum(int a, float b) {
    cout << "Function called: sum(int, float) -> ";
    return a + b;
}

// Function to find the sum of two numbers (float, int)
float sum(float a, int b) {
    cout << "Function called: sum(float, int) -> ";
    return a + b;
}

// Function to find the sum of two numbers (int, int)
int sum(int a, int b) {
    cout << "Function called: sum(int, int) -> ";
    return a + b;
}
// Function to find the sum of two numbers (float, float)
float sum(float a, float b) {
    cout << "Function called: sum(float, float) -> ";
    return a + b;
}

int main() {
    float num1_float, num2_float;
    int num1_int, num2_int;

    cout << "Enter float and int numbers: ";
    cin >> num1_float >> num2_int;
    cout << "Sum of " << num1_float << " and " << num2_int << " is: " << sum(num1_float, num2_int) << endl;

    cout << "\nEnter int and float numbers: ";
    cin >> num1_int >> num2_float;
    cout << "Sum of " << num1_int << " and " << num2_float << " is: " << sum(num1_int, num2_float) << endl;

  
    cout << "\nEnter two int numbers: ";
    cin >> num1_int >> num2_int;
    cout << "Sum of " << num1_int << " and " << num2_int << " is: " << sum(num1_int, num2_int) << endl;

    cout << "\nEnter two float numbers: ";
    cin >> num1_float >> num2_float;
    cout << "Sum of " << num1_float << " and " << num2_float << " is: " << sum(num1_float, num2_float) << endl;

    return 0;
}