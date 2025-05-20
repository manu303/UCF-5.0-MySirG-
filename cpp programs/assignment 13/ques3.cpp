//Define a class Distance and overload + operator to add two distance objects.
#include<iostream>
using namespace std;
class Distance
{
    private:
        int km,m,cm;
    public:
        Distance():km(0),m(0),cm(0)
        {}
        void set_distance(int km,int m,int cm)
        {
            this->km = km;
            this->m = m;
            this->cm = cm;
        }
        void show_distance()
        {
            cout<<"km:"<<km<<endl;
            cout<<"m:"<<m<<endl;
            cout<<"cm:"<<cm<<endl;
        }
        Distance operator+(Distance d)
        {
            Distance temp;
            temp.km = km+d.km;
            temp.m = m+d.m;
            temp.cm = cm+d.cm;
            return temp;
        }
};
int main()
{
    Distance d1,d2,d3;
    d1.set_distance(4,5,60);
    d2.set_distance(4,8,12);
    d3=d1+d2;
    d3.show_distance();
    return 0;
}