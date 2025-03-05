//program to print prime numbers under 100.
#include<stdio.h>
int main(){
    int i=2;
    while(i<100){
        int count=0,j=2;
        while(j<=i/2){
            if(i%j==0){
                count++;
                if(count>0){
                    break;
                }  
            }
            j++;
        }
        if(count==0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}