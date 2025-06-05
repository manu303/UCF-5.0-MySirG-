/*
Define a class Circle with radius as private instance variable and setRadius(),
getRadius(), getArea() as public instance methods. Define a class ThickCircle as a
subclass of Circle with thickness as private instance variable and getThickness(),
setThickness() as public instance methods. Provide an overridden method
getArea() to calculate area of thick portion of circle.
*/
#include<iostream>
using namespace std;
class Circle
{
    private:
        float radius;
    public:
        void setRadius(float radius)
        {
            this->radius=radius;
        }
        float getRadius()
        {
            return radius;
        }
        virtual float getArea()
        {
            return (3.14*radius*radius);
        }
};
class ThickCircle:public Circle
{
    private:
        float thickness;
    public:
        float getThickness()
        {
            return thickness;
        }
        void setThickness(float thickness)
        {
            this->thickness=thickness;
        }
        float getArea()
        {
            float outerradius = Circle::getRadius();
            float innerradius = outerradius - thickness;
            return (3.14*outerradius*outerradius)-(3.14*innerradius*innerradius);
        }
};


int main() {
    Circle c_obj;
    c_obj.setRadius(10);

    ThickCircle t_obj;
    t_obj.setRadius(10);
    t_obj.setThickness(2);

    Circle* ptr_c = &c_obj;
    Circle* ptr_t = &t_obj; // A pointer to a base class type pointing to a derived class object

    // If Circle::getArea() is NOT virtual:
    // This will always call Circle::getArea() because ptr_t is a Circle*
    cout << "Area of circle: " << ptr_c->getArea() << endl; 

    // If Circle::getArea() IS virtual:
    // This will correctly call ThickCircle::getArea() because of runtime polymorphism
    cout << "Area of thickcircle: " << ptr_t->getArea() << endl; 

    return 0;
}