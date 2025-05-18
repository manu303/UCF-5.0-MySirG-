//In ques2,overload operator+to add two Time objects.
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
        Time operator++()
        {
            if(sec<59)
                sec++;
            else if(sec==59)
            {
                sec=0;
                if(min<59)
                    min++;
                else if(min==59)
                {
                    min=0;
                    if(hour<23)
                        hour++;
                    else if(hour==23)
                        hour=0;
                }
            }
            Time temp;
            if(temp.sec<59)
                temp.sec++;
            else if(temp.sec==59)
            {
                temp.sec=0;
                if(temp.min<59)
                    temp.min++;
                else if(temp.min==59)
                {
                    temp.min=0;
                    if(temp.hour<23)
                        temp.hour++;
                    else if(temp.hour==23)
                        temp.hour=0;
                }
            }
            return temp;
        }
        Time operator++(int)
        {
            if(sec<59)
                ++sec;
            else if(sec==59)
            {
                sec=0;
                if(min<59)
                    ++min;
                else if(min==59)
                {
                    min=0;
                    if(hour<23)
                        ++hour;
                    else if(hour==23)
                        hour=0;
                }
            }
            Time temp;
            if(temp.sec<59)
                ++temp.sec;
            else if(temp.sec==59)
            {
                temp.sec=0;
                if(temp.min<59)
                    ++temp.min;
                else if(temp.min==59)
                {
                    temp.min=0;
                    if(temp.hour<23)
                        ++temp.hour;
                    else if(temp.hour==23)
                        temp.hour=0;
                }
            }
            return temp;
        }
        Time operator+(Time t)
        {
            Time temp;
            int total;
            total = ((hour+t.hour)*3600)+((min+t.min)*60)+(sec+t.sec);
            temp.hour = (total/3600);
            total = total%3600;
            temp.min = total/60;
            total= total%60;
            temp.sec = total;
            if(temp.hour>23)
                temp.hour = temp.hour%24;
            return temp;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.set_time(22,0,0);
    t2.set_time(6,0,0);
    t3 = t1+t2;
    t1.show_time();
    t2.show_time();
    t3.show_time();
    return 0;
}