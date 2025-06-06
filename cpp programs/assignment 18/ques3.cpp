/*
Define a class Coordinate with x and y as instance variables.Define overloaded versions of getDistance(),first with no argument calculating distance from origin, and second with one argument of Coordinate type to calculate distance between two coordinates.Also define other methods if required.
*/
#include<iostream>
#include<cmath>
using namespace std;
class Coordinate
{
    private:
        float x,y;
    public:
        Coordinate():x(0),y(0)
        {}
        void set_x(float x)
        {
            this->x=x;
        }
        void set_y(float y)
        {
            this->y=y;
        }
        float get_x()
        {
            return x;
        }
        float get_y()
        {
            return y;
        }
        float getDistance()
        {
            return sqrt(pow(x,2)+pow(y,2));
        }
        float getDistance(Coordinate c)
        {
            return sqrt(pow((c.get_x()-x),2)+pow((c.get_y()-y),2));
        }
};
int main()
{
    Coordinate c1,c2;
    c1.set_x(3.0);
    c1.set_y(4.0);
    cout<<"Distance from origin:"<<c1.getDistance()<<endl;
    c1.set_x(1.0);
    c1.set_y(2.0);
    c2.set_x(4.0);
    c2.set_y(6.0);
    cout<<"Distance between two coordinates:"<<c1.getDistance(c2)<<endl;
    return 0;
}
