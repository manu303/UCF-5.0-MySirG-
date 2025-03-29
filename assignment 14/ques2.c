//program to count digits in given number.
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num<0){
        num = -(num);
    }
    //using while

    // while(num){
    //     num=num/10;
    //     count++;
    // }

    //using for
    for(count=0;num;count++){
        num=num/10;
    }
    printf("The number of digits of given number is : %d",count);
    return 0;
}