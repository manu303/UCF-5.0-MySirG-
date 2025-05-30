/*
Define a class Person with name and age as instance variables as private members.Provide setters and getters as protected methods.Derive a class employee from person class with private instance variable salary.provide public methods setEmployee() and showEmployee()
*/
#include<iostream>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    protected:
        void set_name(string name)
        {
            this->name=name;
        }
        void set_age(int age)
        {
            this->age=age;
        }
        string get_name()
        {
            return name;
        }
        int get_age()
        {
            return age;
        }
};
class Employee:public Person
{
    private:
        float salary;
    public:
        void setEmployee(string name,int age,float salary)
        {
            set_name(name);
            set_age(age);
            this->salary=salary;
        }
        void showEmployee()
        {
            cout<<"Name of the employee:"<<get_name()<<endl;
            cout<<"Age of the employee:"<<get_age()<<endl;
            cout<<"Salary of the employee:"<<salary<<endl;
        }
};

int main()
{
    Employee e1;
    e1.setEmployee("manu",23,80000);
    e1.showEmployee();
    return 0;
}