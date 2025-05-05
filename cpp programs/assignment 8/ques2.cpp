//Define a class Time to represent Time (like 3 hr 45 min 20 sec).Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
#include<iostream>
using namespace std;
class Time
{
    private:
        int hrs;
        int mins;
        int secs;
    public:
        void set_hrs(int x)
        {
            hrs=x;
        }
        void set_mins(int y)
        {
            mins=y;
        }
        void set_secs(int z)
        {
            secs=z;
        }
        void set_time(int x,int y,int z)
        {
            hrs=x;
            mins=y;
            secs=z;
        }
        void display_hrs()
        {
            cout<<hrs<<" hr"<<endl;
        }
        void display_mins()
        {
            cout<<mins<<" min"<<endl;
        }
        void display_secs()
        {
            cout<<secs<<" secs"<<endl;
        }
        void display_time()
        {
            cout<<hrs<<" hr "<<mins<<" min "<<secs<<" secs "<<endl;
        }
};

int main()
{
    Time t1;
    t1.set_hrs(19);
    t1.set_mins(55);
    t1.set_secs(20);
    t1.set_time(19,56,20);
    t1.display_hrs();
    t1.display_mins();
    t1.display_secs();
    t1.display_time();
    return 0;
}