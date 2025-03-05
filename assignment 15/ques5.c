//program to check whether two given numbers are co-prime numbers or not.
#include<stdio.h>
int main(){
    int num1,num2,diff,i;
    printf("Enter any two numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        diff = num1-num2;
    else
        diff = num2-num1;
    if(diff==0)
        printf("Given numbers %d and %d are not co-primes.",num1,num2);
    else if((num1%diff==0)&&(num2%diff==0)){
            if(diff==1)
                printf("Given numbers %d and %d are co-primes.",num1,num2);
            else
                printf("Given numbers %d and %d are not co-primes.",num1,num2);
    }
    else{
        i=diff/2;
        while ((i>0))
        {
            if ((num1%i==0)&&(num2%i==0))
            {
                if ((i==1))
                {
                    printf("Given numbers %d and %d are co-primes.",num1,num2);
                    break;  
                }
                else{
                    printf("Given numbers %d and %d are not co-primes.",num1,num2);
                    break;
                }    
            }
            i--;  
        }   
    }
    return 0;
}