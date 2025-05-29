/*
Create a Coordinate class with 2 instance variables x and y.Overload comma operator such that when you write c3 = (c1,c2) then c2 is assigned to c3.Where c1,c2 and c3 are objects of coordinate class.
*/
#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x,y;
    public:
        Coordinate()
        {
            x=0;
            y=0;
        }
        Coordinate(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        Coordinate operator,(Coordinate c)
        {
            Coordinate temp;
            temp.x = c.x;
            temp.y = c.y;
            return temp;
        }
        void display()
        {
            cout<<"x="<<x<<endl;
            cout<<"y="<<y<<endl;
        }
};
int main()
{
    Coordinate c1,c2(3,4),c3;
    c3 = (c1,c2);
    c3.display();
    return 0;
}