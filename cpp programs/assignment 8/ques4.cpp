//define a class Date to represent date (like d=31, m=12, y=2022).Declare appropriate number of instance member variables and also define instance member functions to set date and get date. and define methods to display in 31-12-2022 and 31-Dec-2022
#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        void set_day(int x)
        {
            d=x;
        }
        void set_month(int y)
        {
            m=y;
        }
        void set_year(int z)
        {
            y=z;
        }
        void set_date(int x,int mon,int z)
        {
            d=x;
            m=mon;
            y=z;
        }
        void get_day()
        {
            cout<<"d= "<<d<<endl;
        }
        void get_month()
        {
            cout<<"m= "<<m<<endl;
        }
        void get_year()
        {
            cout<<"y= "<<y<<endl;
        }
        void get_date()
        {
            cout<<"d="<<d<<", m="<<m<<", y= "<<y<<endl;
        }
        void get_date_1()
        {
            cout<<d<<"-"<<m<<"-"<<y<<endl;
        }
        void get_date_2()
        {
            const char* arr[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
            
            cout<<d<<"-"<<arr[m-1]<<"-"<<y<<endl;
        }
};
int main()
{
    Date today;
    today.set_date(5,1,2025);
    today.get_date();
    today.get_date_1();
    today.get_date_2();
}