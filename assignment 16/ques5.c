//program to print all armstrong numbers under 1000
#include<stdio.h>
int main(){
    int i=0;
    while(i<1000){
        int a=i,b=i,count=1,sum=0;
        while(a/10>0){
            count++;
            a=a/10;
        }
        int j=1;
        while(j<=count){
            int digits=count,prod=1;
            while (digits>0)
            {
                prod= prod*(b%10);
                digits--;
            }
            sum = sum+prod;
            b=b/10;
            j++;
        }
        if(sum==i)
            printf("%d ",i);
        i++;
    }
    return 0;
}