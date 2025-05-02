//overloaded functions to calculate area of circle,rectangle and triangle.
#include<iostream>
using namespace std;
float area(float);
float area(float,float);
float area(float,float,float);
int main()
{
    float radius,length,breadth,base,height;
    cout<<"Enter radius to calculate area of circle:";
    cin>>radius;
    cout<<"Enter length and breadth to calculate area of rectangle:";
    cin>>length>>breadth;
    cout<<"Enter base,height and 0.5 to calculate area of triangle:";
    cin>>base>>height;
    cout<<"Area of circle:"<<area(radius)<<endl;
    cout<<"Area of rectangle:"<<area(length,breadth)<<endl;
    cout<<"Area of traingle:"<<area(base,height,0.5)<<endl;
}
float area(float radius)
{
    return 3.14*radius*radius;
}
float area(float length,float breadth)
{
    return length*breadth;
}
float area(float base,float height,float c)
{
    return c*base*height;
}