//program to enter the marks of 5 students in chemistry,mathematics and physics(each out of 100) using a structure named marks having elements roll_no,name,chem_marks,maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>
#include<string.h>
struct Marks input(int i);
struct Marks
{
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main()
{
    struct Marks stu[5];
    int i;
    for(i=0;i<5;i++)
    {
        stu[i]=input(i);
    }
    float avg;
    for(i=0;i<5;i++)
    {
        avg=((stu[i].chem_marks+stu[i].maths_marks+stu[i].phy_marks)/300.0)*100;
        printf("\n------------------------------\n");
        printf("Student %d\n",i+1);
        printf("Roll no:%d\n",stu[i].roll_no);
        printf("Name:%s\n",stu[i].name);
        printf("Percentage:%.2f\%",avg);
    }
    return 0;
}

struct Marks input(int i)
{
    struct Marks m;
    printf("Enter student %d roll no,name,chemistry marks,maths marks,physics marks:",i+1);
    scanf("%d",&m.roll_no);
    getchar();
    fgets(m.name,50,stdin);
    m.name[strlen(m.name)-1]='\0';
    scanf("%f %f %f",&m.chem_marks,&m.maths_marks,&m.phy_marks);
    return m;
}