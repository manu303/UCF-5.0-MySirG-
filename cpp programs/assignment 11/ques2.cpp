//Define a class student and write a program to enter student details using constructor and define member function to display all the details.
#include<iostream>
using namespace std;
class student
{
    private:
        char *name;
        int rollno;
        float percentage;
    public:
        student(char *name,int rollno,float percentage):name(name),rollno(rollno),percentage(percentage)
        {}
        void display()
        {
            cout<<endl<<"Name:";
            cout<<name<<endl;
            cout<<"Roll no:"<<rollno<<endl;
            cout<<"Percentage:"<<percentage<<endl;
        }     
};

int main()
{
    student s1("manoj",303,78),s2("valli",230,65);
    s1.display();
    s2.display();
    return 0;
}