//function to sort employees according to thier names.
#include<stdio.h>
#include<string.h>
struct Employee input(int i);
void sort(struct Employee *empptr);
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
    sort(emp);
    printf("----------Sorted list----------\n");
    for(i=0;i<10;i++)
    {
        printf("Employee id:%d\n",emp[i].id);
        printf("Employee name:%s\n",emp[i].name);
        printf("Employee salary:%.2f\n",emp[i].salary);
        printf("\n");
    }
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

void sort(struct Employee *empptr)
{

    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(empptr[i].name,empptr[j].name)==1)
            {
                struct Employee temp;
                temp=empptr[i];
                empptr[i]=empptr[j];
                empptr[j]=temp;
            }
        }
    }
}