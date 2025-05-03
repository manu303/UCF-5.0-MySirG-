//overloaded functions to calculate volume of cuboid,cone and sphere.
#include<iostream>
using namespace std;
float volume(float,float,float);
float volume(float,float);
float volume(float);
int main()
{
    float length,breadth,height,cheight,crad,srad;
    //input
    cout<<"Enter length,breadth and height for cuboid:";
    cin>>length>>breadth>>height;
    cout<<"Enter height and radius for cone:";
    cin>>cheight>>crad;
    cout<<"Enter radius for sphere:";
    cin>>srad;
    //output
    cout<<"Volume of cuboid:"<<volume(length,breadth,height)<<endl;
    cout<<"Volume of cone:"<<volume(cheight,crad)<<endl;
    cout<<"Volume of sphere:"<<volume(srad)<<endl;
    return 0;
}

float volume(float l,float b,float h)
{
    return l*b*h;
}
float volume(float h,float rad)
{
    return (1.0/3.0)*(3.14)*(rad*rad*h);
}
float volume(float rad)
{
    return (4.0/3.0)*(3.14)*(rad*rad*rad);
}