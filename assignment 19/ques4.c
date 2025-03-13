//check whether given three sides are equilateral isoscales or right angled with the help of switch case like a menu driven program
#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1)
    {
        int count;
        printf("Enter your choice: \n\n");
        printf("1.Isosceles Triangle or not\n2.Right angled triangle or not\n3.Equilateral triangle or not\n4.Exit\n\n");
        scanf("%d",&count);
        int a,b,c;
        switch(count)
        {
            case 1:
            printf("Enter three sides: ");
            scanf("%d%d%d",&a,&b,&c);
            if((a+b>c)&&(a+c>b)&&(b+c>a))
            {
                if(a==b && b!=c)
                    printf("Isosceles traingle\n");
                else if(a==c && c!=b)
                    printf("Isosceles traingle\n");
                else if(b==c && c!=a)
                    printf("Isosceles traingle\n");
                else
                    printf("Not an Isosceles traingle\n"); 
            }
            else{
                printf("Not a valid triangle\n");   
            }
            break;
            case 2:
            int high,low1,low2;
            printf("Enter three sides: ");
            scanf("%d%d%d",&a,&b,&c);
            if((a+b>c)&&(a+c>b)&&(b+c>a))
            {
                if((a>b)&&(a>c))
                    {
                        high=a;
                        low1=b;
                        low2=c;
                    }
                else if(b>c)
                   {
                        high=b;
                        low1=a;
                        low2=c;
                   }
                else
                    {
                        high=c;
                        low1=a;
                        low2=b; 
                    } 
                if((high*high)==(low1*low1)+(low2*low2))
                    printf("Right angled triangle\n");
                else
                    printf("Not a Right angled triangle\n");
            }
            else{
                printf("Not a valid triangle\n");
            }
            break;
            case 3:
            printf("Enter three sides: ");
            scanf("%d%d%d",&a,&b,&c);
            if((a+b>c)&&(a+c>b)&&(b+c>a))
            {
                if((a==b) && (b==c))
                    printf("Equilateral Triangle\n");
                else
                    printf("Not an Equilateral Triangle\n");
            }
            else{
                printf("Not a valid triangle\n"); 
            }
            break;
            case 4:
            exit(0);

            default:
            printf("Not a valid input.\n");

        }
        
    }
    return 0;
}