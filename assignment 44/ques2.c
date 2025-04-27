//write a function to take input employee data from the user.
#include<stdio.h>
#include<string.h>
//declaring functions
struct Employee input();
void display(struct Employee);
//defining employee structure
struct Employee
{
    int id;
    char name[50];
    float salary;
};
//main function
int main()
{
    struct Employee e1;
    e1 = input();
    return 0;
}
//defining input function
struct Employee input()
{
    struct Employee emp;
    printf("Enter employee id: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    getchar();       // Consume the newline character left by scanf
    fgets(emp.name, 50, stdin);
    emp.name[strlen(emp.name) - 1] = '\0'; 
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    return emp;
}
