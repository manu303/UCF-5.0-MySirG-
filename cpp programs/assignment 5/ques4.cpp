//write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include <iostream>
using namespace std;

// Function to find the maximum of two integers
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to find the maximum of two floating-point numbers
float max(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    float num1_float, num2_float;
    int num1_int, num2_int;

    cout << "Enter two floating-point numbers: ";
    cin >> num1_float >> num2_float;
    cout << "Maximum of " << num1_float << " and " << num2_float << " is: " << max(num1_float, num2_float) << endl;

    cout << "\nEnter two integer numbers: ";
    cin >> num1_int >> num2_int;
    cout << "Maximum of " << num1_int << " and " << num2_int << " is: " << max(num1_int, num2_int) << endl;

    return 0;
}