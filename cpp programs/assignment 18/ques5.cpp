/*
in ques3 and ques4,derive a class StraightLine from Shape with two coordinate type objects as instance members.Provide methods to setLine(),getDistance() and showLine()
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
class Shape
{
    private:
        string shapeName;
    public:
        Shape():shapeName("n/a")
        {}
        Shape(string shapeName):shapeName(shapeName)
        {}
        string get_shapeName()
        {
            return shapeName;
        }
        void set_shapeName(string shapeName)
        {
            this->shapeName = shapeName;     
        }
};
class StraightLine:public Shape
{
    private:
        Coordinate c1,c2;
    public:
        StraightLine():Shape("Straight Line")
        {}
        void setLine(Coordinate c1,Coordinate c2)
        {
            this->c1=c1;
            this->c2=c2;
        }  
        float getDistance()
        {
            return c1.getDistance(c2);
        }
        void showLine()
        {
            cout<<"Shape name:"<<get_shapeName()<<endl;
            cout<<"ordered pair 1: x="<<c1.get_x()<<" y="<<c1.get_y()<<endl;
            cout<<"ordered pair 2: x="<<c2.get_x()<<" y="<<c2.get_y()<<endl;
            cout<<"Distance between these two ordered pairs:"<<getDistance()<<endl;
        }
};
int main()
{
    StraightLine line;
    Coordinate c1,c2;
    c1.set_x(1.0);
    c1.set_y(2.0);
    c2.set_x(4.0);
    c2.set_y(6.0);
    line.setLine(c1,c2);
    line.showLine();
    return 0;
}