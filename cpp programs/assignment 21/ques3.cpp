/*
Define a class Employee with empid,name and salary as instance variables.Also provide instance methods to input and display employee record.
*/
#include<iostream>
using namespace std;
class Employee
{
    private:
        int empid;
        string name;
        float salary;
    public:
        void setEmployee(int empid,string name,float salary)
        {
            this->empid=empid;
            this->name=name;
            this->salary=salary;
        }
        void showEmployee()
        {
            cout<<endl<<empid<<"  "<<name<<"  "<<salary;
        }
};