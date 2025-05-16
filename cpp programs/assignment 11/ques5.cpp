//Define Circle class with radius as instance variable.Define two constructors in the class -non parameterised and parameterised 
#include <iostream>

using namespace std;

class Circle {
private:
    float radius;
    const float PI = 3.14;

public:
    Circle() : radius(0) {
        cout << endl;
        cout << "Radius of circle: " << radius << endl;
        cout << "Area of circle: " << PI * radius * radius << endl;
        cout << "Perimeter of circle: " << 2 * PI * radius << endl;
    }

    Circle(float r) : radius(r) {
        cout << endl;
        cout << "Radius of circle: " << radius << endl;
        cout << "Area of circle: " << PI * radius * radius << endl;
        cout << "Perimeter of circle: " << 2 * PI * radius << endl;
    }
};

int main() {
    Circle c1;
    Circle c2(5);
    return 0;
}