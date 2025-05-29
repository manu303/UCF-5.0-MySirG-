/*
Define a class Student with roll_no,name and age as instnce variables.Create setStudent() and showStudent() methods in the class.Overload operator== to compare two syudent objects.
*/
#include<iostream>
using namespace std;
class Student
{
    private:
        int roll_no,age;
        string name;
    public:
        Student()
        {
            roll_no=0;
            age=0;
            name="n/a";
        }
        void setStudent(int roll_no,string name,int age)
        {
            this->roll_no=roll_no;
            this->name=name;
            this->age=age;
        }
        void ShowStudent()
        {
            cout<<"Roll No:"<<roll_no<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
        }
        bool operator==(const Student &s) const
        {
            return (roll_no==s.roll_no)&&(age==s.age)&&(name==s.name);
        }
};
int main()
{
    Student S1,S2,S3;
    S1.setStudent(1,"sridhar",20);
    S2.setStudent(1,"sridhar",20);
    if(S1==S2)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    if(S1==S3)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}