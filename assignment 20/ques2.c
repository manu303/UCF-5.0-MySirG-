//menu driven programs
#include<stdio.h>
#include<stdlib.h>
int main(){
while(1){
    printf("Enter your choice: \n\n");
    printf("1.Factorial of a number\n2.Check even or odd\n3.Area of circle\n4.Sum of first N natural numbers\n5.Exit\n\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        int num,fact=1;;
        printf("Enter a number: ");
        scanf("%d",&num);
        for(num;num>1;num--){
            fact=fact*num;
        }
        printf("The factorial is %d\n",fact);
        break;

        case 2:
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n%2==0)
            printf("Even number\n");
        else
            printf("Odd number\n");
        break;

        case 3:
        float radius;
        printf("Enter radius: ");
        scanf("%f",&radius);
        printf("The area of circle is %.2f\n",3.14*radius*radius);
        break;

        case 4:
        int numb;
        printf("Enter number: ");
        scanf("%d",&numb);
        printf("The sum of first %d natural numbers is %d\n",numb,(numb*(numb+1))/2);
        break;

        case 5:
        exit(0);

        default:
        printf("Enter valid input\n");
    }
 }
 return 0;
}