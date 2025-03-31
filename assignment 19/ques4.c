//check whether given three sides are equilateral isoscales or right angled with the help of switch case like a menu driven program
#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1)
    {
        int a,b,c;
        printf("Enter three sides: ");
        scanf("%d%d%d",&a,&b,&c);
        int choice;
        printf("Enter your choice: \n\n");
        printf("1.Isosceles Triangle or not\n2.Right angled triangle or not\n3.Equilateral triangle or not\n4.Exit\n\n");
        scanf("%d",&choice);
        if((a+b>c)&&(a+c>b)&&(b+c>a));
        else
            choice=5;
        switch(choice)
        {
            case 1:
                if(a==b||b==c||c==a)
                    printf("Iscosceles traingle\n");
                else
                    printf("Not an isosceles traingle\n");
                break;
            case 2:
                if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
                    printf("Right angled triangle\n");
                else
                    printf("Not a right angled triangle\n");
                break;
            case 3:
                if((a==b) && (a==c))
                    printf("Equilateral Triangle\n");
                else
                    printf("Not an Equilateral Triangle\n");
                break;
            case 4:
                exit(0);
            case 5:
                printf("Not a valid triangle\n");
                break;
            default:
                printf("Not a valid input.\n");
        } 
    }
    return 0;
}