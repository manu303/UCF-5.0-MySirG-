/*
Define a class Cuboid with length,breadth and height as instance member variables.Define constructors to initialise member variables.
*/
#include<iostream>
using namespace std;
class Cuboid
{
    private:
        float length,breadth,height;
    public:
        Cuboid()
        {
            length = 0;
            breadth = 0;
            height = 0;
        }
        Cuboid(float x)
        {
            length = x;
            breadth = 0;
            height = 0;
        }
        Cuboid(float x,float y)
        {
            length = x;
            breadth = y;
            height = 0;
        }
        Cuboid(float x,float y,float z)
        {
            length = x;
            breadth = y;
            height = z;
        }
        void display()
        {
            cout<<"Length = "<<length<<endl;
            cout<<"Breadth = "<<breadth<<endl;
            cout<<"Height = "<<height<<endl;
            cout<<endl;
        }
};

int main()
{
    Cuboid c1,c2(1),c3(1,2),c4(1,2,3);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    return 0;
}
