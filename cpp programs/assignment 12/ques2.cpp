//Create a class Time which contains hour,min and sec as fields.Overload greater than(>) operator to compare two Time objects.
#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        Time():hour(0),min(0),sec(0)
        {}
        void set_time(int h,int m,int s)
        {
            hour =h;
            min = m;
            sec = s;
        }
        void show_time()
        {
            cout<<hour<<(hour>1?" hrs:":" hr:")<<min<<(min>1?" mins:":" min:")<<sec<<(sec>1?" secs":" sec")<<endl<<endl;
        }
        bool operator>(Time t)
        {
            if(hour > t.hour)
                return true;
            else if(hour < t.hour)
                return false;
            else if(min > t.min)
                return true;
            else if(min < t.min)
                return false;
            else if(sec > t.sec)
                return true;
            else
                return false; 
        }
};

int main()
{
    Time t1,t2;
    t1.set_time(1,2,1);
    t2.set_time(1,1,1);
    t1.show_time();
    t2.show_time();
    if(t1 > t2)
        cout<<"t1 is greater than t2"<<endl;
    else if (t2 > t1)
        cout<<"t1 is less than t2"<<endl;
    else
        cout<<"t1 is equal to t2"<<endl;
    return 0;
}