/*
Define a class Person with name and age as instance variables.Provide parameterised constructor with two formal arguments name & age, to initialise instance variables.
*/
#include<iostream>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    public:
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void display()
        {
            cout<<name<<" "<<age<<endl;
        }
};

int main()
{
    Person p("manu",23);
    p.display();
    return 0;
}