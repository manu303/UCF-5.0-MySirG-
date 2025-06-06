/*
Define a class A with two int type member variables.Define a member function to setData() and showData() to set and display the member variables Also define a member function with the name input() to take input from the user. Define a class B with one int type member variable.Override input() function in order to input three values from the user for all the memeber variables Also override ShowData() function to display all three values
*/
#include<iostream>
using namespace std;
class A
{
    private:
        int x,y;
    public:
        A():x(0),y(0)
        {}
        A(int x,int y):x(x),y(y)
        {}
        void setData(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        virtual void showData()
        {
            cout<<"variable 1:"<<x<<endl;
            cout<<"variable 2:"<<y<<endl;
        }
        virtual void input()
        {
            cout<<"enter data for variable 1:";
            cin>>x;
            cout<<"enter data for variable 2:";
            cin>>y;
        }
};

class B:public A
{
    private:
        int z;
    public:
        B():A()
        {
            z=0;
        }
        B(int x,int y,int z):A(x,y)
        {
            this->z=z;
        }
        void setData(int z)
        {
            this->z=z;
        }
        void input()
        {
            A::input();
            cout<<"enter data for variable 3:";
            cin>>z;
        }
        void showData()
        {
            A::showData();
            cout<<"Variable 3:"<<z<<endl;
        }
};
int main()
{
    B obj;
    obj.input();
    obj.showData();
    return 0;
}