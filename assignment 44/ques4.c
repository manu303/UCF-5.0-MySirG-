//function to find the highest salary employee from a given array of 10 employees.
#include<stdio.h>
#include<string.h>
struct Employee input(int i);
void highest_salary(struct Employee *empptr);
struct Employee 
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[10];
    int i;
    for(i=0;i<10;i++)
        emp[i]=input(i);
    highest_salary(emp);
    printf("----------Highest salaried Employee----------\n");
    printf("Employee id:%d\n",emp[0].id);
    printf("Employee name:%s\n",emp[0].name);
    printf("Employee salary:%.2f\n",emp[0].salary);
}

struct Employee input(int i)
{

    struct Employee emp;
    printf("Enter Employee %d id,name and salary:",i+1);
    scanf("%d",&emp.id);
    getchar();
    fgets(emp.name,50,stdin);
    emp.name[strlen(emp.name)-1]='\0';
    scanf("%f",&emp.salary);
    return emp;
}

void highest_salary(struct Employee *empptr)
{

    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(empptr[i].salary < empptr[j].salary)
            {
                struct Employee temp;
                temp=empptr[i];
                empptr[i]=empptr[j];
                empptr[j]=temp;
            }
        }
    }
}