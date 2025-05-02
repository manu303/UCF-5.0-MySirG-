//function using default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Sum of two numbers (a + b): " << add(a, b) << endl;
    cout << "Sum of three numbers (a + b + c): " << add(a, b, c) << endl;
    return 0;
}

int add(int a, int b, int c)
{
    return a + b + c;
}