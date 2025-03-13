//menu driven program for lcm,sum of digits,volume of cuboid,prime or not ,exit
#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1)
    {
        int choice;
        printf("Enter your choice: \n\n");
        printf("1.LCM of 2 numbers\n2.Sum of digits of a number\n3.Volume of cuboid\n4.Prime or Not\n5.Exit\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            int a,b,L;
            printf("enter two numbers: ");
            scanf("%d%d",&a,&b);
            for(L=a>b?a:b;L<=a*b;L++){
                if(L%a==0 && L%b==0)
                    break;
            }
            printf("Lcm is %d\n",L);
            break;
            
            case 2:
            int num,sum=0;
            printf("Enter any number: ");
            scanf("%d",&num);
            if(num<0)
                num = -(num);
            else{
                for(num;num>0;num=num/10){
                    sum = sum + num%10;
                }
                printf("The sum of digits in given number is %d\n",sum);
            }
            break;

            case 3:
            float l,br,h;
            printf("Enter length,breadth and height:");
            scanf("%f%f%f",&l,&br,&h);
            printf("Volume of the cunoid is %.2f\n",l*br*h);
            break;

            case 4:
            int i,x;
            printf("Enter a number");
            scanf("%d",&x);
            for(i=2;i<x;i++){
                if(x%i==0)
                break;
            }
            if(i==x)
                printf("Prime\n");
            else
                printf("Not Prime\n");
            break;

            case 5:
            exit(0);
        }
    }
    return 0;
}