/*
Define a class integer with instance variable of type int.Provide a friend logical operator not !.Also define a friend operator == to compare two integer object.
*/
#include<iostream>
using namespace std;
class integer
{
    private:
        int var;
    public:
        integer()
        {
            var=0;
        }
        integer(int var)
        {
            this->var=var;
        }
        friend bool operator!(integer);
        friend bool operator==(integer,integer);
};
bool operator!(integer x)
{
        return !(x.var);
}
bool operator==(integer x,integer y)
{
    return x.var == y.var;
}

int main()
{
    integer x(5),y;
    if(x==y)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    cout<<(!y);
    return 0;
}