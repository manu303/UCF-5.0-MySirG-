/*
Define a class Time with hr,min,sec as instance member variables.Define constructor to initialise time object.
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        Time()
        {
            hr=0;
            min=0;
            sec=0;
        }
        void display()
        {
            cout<<"hr: "<<hr<<endl;
            cout<<"min: "<<min<<endl;
            cout<<"sec: "<<sec<<endl;
            cout<<endl;
        }
};

int main()
{
    Time t;
    t.display();
    return 0;
}