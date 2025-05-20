//in ques3,define pre decrement and post decrement operator to decrease distance by 1 cm.

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
        Distance operator--()
        {
            Distance temp;
            if(km>0)
                temp.km = km--;
            else
                temp.km=0;
            if(m>0)
                temp.m = m--;
            else
                temp.m=0;
            if(cm>0)
                temp.cm = cm--;
            else
                temp.cm=0;
            return temp;
        }
        Distance operator--(int)
        {
            Distance temp;
            if(km>0)
                temp.km = --km;
            else
                temp.km=0;
            if(m>0)
                temp.m = --m;
            else
                temp.m=0;
            if(cm>0)
                temp.cm = --cm;
            else
                temp.cm=0;
            return temp;
        }
};
int main()
{
    Distance d1,d2,d3;
    d1.set_distance(4,5,60);
    cout<<"Distance 1:"<<endl;
    d1.show_distance();
    d2.set_distance(4,8,12);
    cout<<"Distance 2:"<<endl;
    d2.show_distance();
    d1--;
    cout<<"Distance 1 post decrement:"<<endl;
    d1.show_distance();
    --d1;
    cout<<"Distance 1 pre decrement:"<<endl;
    d1.show_distance();
    cout<<"Distance 2 post decrement:"<<endl;
    d2--;
    d2.show_distance();
    --d2;
    cout<<"Distance 2 pre decrement:"<<endl;
    d2.show_distance();
    return 0;
}