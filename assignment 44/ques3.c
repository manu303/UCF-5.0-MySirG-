//write a function to display employee data.
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
    display(e1);
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

//defining display function
void display(struct Employee e)
{
    printf("----------------------------------\n");
    printf("Employee id: %d\n", e.id);
    printf("Employee name: %s\n", e.name);
    printf("Employee salary: %.2f\n", e.salary); // Display salary with 2 decimal places
}