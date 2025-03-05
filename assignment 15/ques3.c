//program to find next prime number of a given number.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter starting prime number: ");
    scanf("%d",&n);
    i=n+1;
    while(i<(n*2))
    {
        int count=0,j=2;
        while(j<=i/2){
            if(i%j==0){
                count++;
                break;
            }
            j++;
        }
        if(count==0){
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}