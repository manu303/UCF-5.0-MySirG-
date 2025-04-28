//program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>
struct student input(int i);
void display(struct student stu);
struct student
{
    int roll_no;
    char name[50];
};

int main()
{
    struct student student[10];
    int i;
    for(i=0;i<10;i++)
    {
        student[i]=input(i);
    }
    for(i=0;i<10;i++)
    {
        display(student[i]);
    }
    return 0;
}

struct student input(int i)
{
    struct student stu;
    printf("Enter student %d roll number and name:",i+1);
    scanf("%d",&stu.roll_no);
    getchar();
    fgets(stu.name,50,stdin);
    return stu;
}

void display(struct student stu)
{
    printf("-------------------------------\n");
    printf("Roll Number:%d\n",stu.roll_no);
    printf("Name:%s",stu.name);
}