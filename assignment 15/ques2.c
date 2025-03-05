//program to print prime numbers between given numbers.
#include<stdio.h>
int main(){
    int i,num;
    printf("Enter starting and ending number: ");
    scanf("%d%d",&i,&num);
    while(i<num){
        int count=0,j=2;
        while (j<=i/2)
        {
            if (i%j==0)
            {
                count++;
                break;
            }
            j++;  
        }
        if (count==0)
        {
            printf("%d ",i);
        }
        i++; 
    }
    return 0;
}