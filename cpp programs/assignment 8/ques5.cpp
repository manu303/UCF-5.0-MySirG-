//Define a class Circle with radius as its property.Provide setRadius() and getRadius() methods.Also define methods to return area and circumference of circle.
#include<iostream>
using namespace std;
class Circle
{
    private:
        float radius;
    public:
        void setRadius(int x)
        {
            radius=x;
        }
        void getRadius()
        {
            cout<<radius<<endl;
        }
        float area()
        {
            return 3.14*radius*radius;
        }
        float circumference()
        {
            return 2*3.14*radius;
        }
};
int main()
{
    Circle one;
    one.setRadius(5);
    one.getRadius();
    cout<<one.area()<<endl;
    cout<<one.circumference()<<endl;
    return 0;
}