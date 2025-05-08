/*
Define a class Time to represent a time with instance variables h,m and s to store hour,minute and second.Also define following member functions
1.void setTime(int,int,int)
2.void showTime()
3.void normalize()
4.Time add(Time)
5.bool is_greater(Time)
*/ 
#include <iostream>
using namespace std;

class Time {
    private:
        int h,m,s;
    public:
        void setTime(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void showTime()
        {
            cout << h << ":" << m << ":" << s;
        }
        void normalize()
        {
            if(s>59)
            {
                m = m + (s/60);
                s = s%60;
            }
            if(m>59)
            {
                h = h + (m/60);
                m = m%60;
            }
            if(h>23)
            {
                h = h%24;
            }
        }
        Time add(Time T)
        {
            Time temp;
            temp.h = h + T.h;
            temp.m = m + T.m;
            temp.s = s + T.s;
            temp.normalize();
            return temp;
        }
        bool is_greater(Time T)
        {
            int total_sec,arg_total_sec;
            total_sec = (h*3600)+(m*60)+(s);
            arg_total_sec = (T.h*3600)+(T.m*60)+(T.s);
            if(total_sec > arg_total_sec)
                return 1;
            else
                return 0;
        }
};

int main()
{
    Time T1,T2;
    T1.setTime(25,90,80);
    T2.setTime(5,0,0);
    T1.showTime();
    cout << endl;
    T1.normalize();
    T1.showTime();
    cout << endl;
    Time T3 = T1.add(T2);
    T3.showTime();
    cout << endl;
    if(T1.is_greater(T2))
        cout << "T1 is greater than T2";
    else
        cout << "T2 is greater than or equal to T1";
    return 0;
}