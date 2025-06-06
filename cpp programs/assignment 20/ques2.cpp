/*
Define a class Shape with member variable to store name of the shape.Provide methods to set and display name of the shape.Define a pure virtual function area() in Shape class .Define two derived classes of shape,one is rectangle and second is square.Define appropriate members in both the classes.Demonstrate usage of the classes by making driver function main()
*/
#include<iostream>
#include<string>
using namespace std;
class Shape
{
    private:
        string shapeName;
    public:
        Shape():shapeName("n/a")
        {}
        void setshapeName(string shapeName)
        {
            this->shapeName=shapeName;
        }
        string getshapeName()
        {
            return shapeName;
        }
        virtual float area()=0;
};
class rectangle:public Shape
{
    private:
        float length,breadth;
    public:
        rectangle():length(0),breadth(0)
        {}
        rectangle(float length,float breadth):length(length),breadth(breadth)
        {}
        float area()
        {
            return length*breadth;
        }
        void setlength(float length)
        {
            this->length=length;
        }
        void setbreadth(float breadth)
        {
            this->breadth=breadth;
        }
        float getlength()
        {
            return length;
        }
        float getbreadth()
        {
            return breadth;
        }
};
class square:public Shape
{
    private:
        float side;
    public:
        square():side(0)
        {}
        square(float side):side(side)
        {}
        float area()
        {
            return side*side;
        }
        void setside(float side)
        {
            this->side=side;
        }
        float getside()
        {
            return side;
        }
};

int main()
{
    rectangle obj1;
    square obj2;
    obj1.setshapeName("Rectangle");
    cout<<"shape name:"<<obj1.getshapeName()<<endl;
    obj1.setlength(5);
    obj1.setbreadth(4);
    cout<<"Area of "<<obj1.getshapeName()<<" is:"<<obj1.area()<<endl;
    obj2.setshapeName("Square");
    cout<<"shape name:"<<obj2.getshapeName()<<endl;
    obj2.setside(5);
    cout<<"Area of "<<obj2.getshapeName()<<" is:"<<obj2.area()<<endl;
    return 0;
}