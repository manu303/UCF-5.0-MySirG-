/*
in ques3,overload insertion and extraction operator
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
        friend istream& operator>>(istream&,Coordinate&);
        friend ostream& operator<<(ostream&,Coordinate);
};
istream& operator>>(istream &din,Coordinate &c)
{
    din>>c.x>>c.y;
    return din;
}
ostream& operator<<(ostream &dout,Coordinate c)
{
    dout<<"x="<<c.x<<endl;
    dout<<"y="<<c.y<<endl;
    return dout;
}
int main()
{
    Coordinate c1,c2(3,4),c3,c4;
    c3 = (c1,c2);
    c3.display();
    cout<<"Enter x and y coordinate:";
    cin>>c4;
    cout<<c4;
    return 0;
}