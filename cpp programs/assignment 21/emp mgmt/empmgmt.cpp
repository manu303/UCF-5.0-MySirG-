/*
Define a class Employee with empid,name and salary as instance variables.Also provide instance methods to input and display employee record.
1)store new employee record
2)print all employee records
3)search an emplopyee by his empid,print his record if found,otherwise display a message of search failed.
4)edit employee data of given empid
5)delete an employee record of given empid
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int ID;
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

        void addEmployee()
        {
            
            cin.get();
            cout<<"Enter employee name:";
            getline(cin,name);
            cout<<"Enter employee salary:";
            cin>>salary;
            ID++;

            ofstream fout;
            fout.open("employee.txt",ios::app);
            fout<<"\n"<<ID;
            fout<<"\n"<<name;
            fout<<"\n"<<salary;
            fout.close();

            fout.open("id.txt",ios::app);
            fout<<"\n"<<ID;
            fout.close();

            cout<<"Record added successfully"<<endl;

        }

        void printallEmployee()
        {
            ifstream fin;
            fin.open("employee.txt",ios::in);
            Employee temp;
            while(!fin.eof())
            {
                fin>>temp.empid;
                fin.ignore();
                getline(fin,temp.name);
                fin>>temp.salary;

                temp.showEmployee();
            }
            fin.close();
        }

        void searchEmployee(int empid)
        {
            ifstream fin;
            fin.open("employee.txt",ios::in);
            Employee temp;
            fin>>temp.empid;
            fin.ignore();
            getline(fin,temp.name);
            fin>>temp.salary;
            while(!fin.eof())
            {
                if(temp.empid!=empid)
                {
                    fin>>temp.empid;
                    fin.ignore();
                    getline(fin,temp.name);
                    fin>>temp.salary;
                }
                else
                    break;   
            }
            if(temp.empid==empid)
                temp.showEmployee();
            else
                cout<<"Record not found"<<endl;
            fin.close();
        }

        void updateEmployee(int empid)
        {
            deleteEmployee(empid);

            cin.get();
            cout<<"Enter employee name:";
            getline(cin,name);
            cout<<"Enter employee salary:";
            cin>>salary;

            ofstream fout;
            fout.open("employee.txt",ios::app);
            fout<<"\n"<<empid;
            fout<<"\n"<<name;
            fout<<"\n"<<salary;
            fout.close();

            cout<<"Record updated successfully"<<endl;
        }

        void deleteEmployee(int empid)
        {
            ifstream fin;
            fin.open("employee.txt",ios::in);

            ofstream fout;
            fout.open("temp.txt",ios::app);

            while(!fin.eof())
            {
                Employee temp;
                fin>>temp.empid;
                fin.ignore();
                getline(fin,temp.name);
                fin>>temp.salary;
                if(temp.empid!=empid)
                {
                    fout<<"\n"<<temp.empid;
                    fout<<"\n"<<temp.name;
                    fout<<"\n"<<temp.salary;
                }   
            }
            fin.close();
            fout.close();
            remove("employee.txt");
            rename("temp.txt","employee.txt");

            cout<<"Record deleted successfully"<<endl;
        }

};

int main()
{

    ifstream fin;
    fin.open("id.txt",ios::in);
    if(!fin)
        cout<<"File not found"<<endl;
    else
    {
        while(!fin.eof())
        {
            fin>>ID;
        }
        fin.close();
        cout<<ID<<endl;
    }
    
    

    int choice;
    Employee emp;
    int empid;
    while(1)
    {
        cout<<"\n\nEnter you choice:"<<endl;
        cout<<"1)store new employee record"<<endl;
        cout<<"2)print all employee records"<<endl;
        cout<<"3)search an emplopyee record"<<endl;
        cout<<"4)edit an employee record"<<endl;
        cout<<"5)delete an employee record"<<endl<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: emp.addEmployee();
                    break;
            case 2: emp.printallEmployee();
                    break;
            case 3: cout<<"Enter employee id to search:";
                    cin>>empid;
                    emp.searchEmployee(empid);
                    break;
            case 4: cout<<"Enter employee id to update:";
                    cin>>empid;
                    emp.updateEmployee(empid);
                    break;
            case 5: cout<<"Enter employee id to delete:";
                    cin>>empid;
                    emp.deleteEmployee(empid);
                    break;
            default: cout<<"Invalid choice";
                     return 0;
        }
    }
    return 0;
}