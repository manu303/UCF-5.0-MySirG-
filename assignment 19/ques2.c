//menu driven program -->add,subtract,mul,div,exit
#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1)
    {
        int choice;
        float a,b;
        printf("Choose one option:\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Two numbers: ");
                scanf("%f%f",&a,&b);
                printf("Sum is %.1f\n\n",a+b);
                break;
            case 2:
                printf("\nEnter Two numbers: ");
                scanf("%f%f",&a,&b);
                printf("Difference is %.1f\n\n",a-b);
                break;
            case 3:
                printf("\nEnter Two numbers: ");
                scanf("%f%f",&a,&b);
                printf("Product is %.1f\n\n",a*b);
                break;
            case 4:
                printf("\nEnter Two numbers: ");
                scanf("%f%f",&a,&b);
                printf("Division is %.1f\n\n",a/b);
                break;
            case 5:
                exit(0);
            default:
                printf("Enter valid choice,retry.");
    }
}
    return 0;
}