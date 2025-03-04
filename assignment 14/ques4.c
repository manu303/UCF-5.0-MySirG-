//program to calculate LCM of two numbers.
#include<stdio.h>
int main(){
    int num1,num2,i=2;
    printf("Enter any two +ve numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        if((num1%num2) == 0)
            printf("The LCM is %d",num1);
        else{
            while (i<=num2)
            {
                if((num1*i)%num2==0){
                    printf("The LCM is %d",num1*i);
                    break;
                }
                i++;
            }  
        }
    }
    else{ 
        if((num2%num1)==0)
            printf("The LCM is %d",num2);
        else{
            while(i<=num1)
            {
                if((num2*i)%num1==0){
                    printf("The LCM is %d",num2*i);
                    break;
                }
                i++;
            }

        }
    }
    return 0;
} 