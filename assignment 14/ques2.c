//program to count digits in given number.
#include<stdio.h>
int main(){
    int num,count=1;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num<0){
        num = -(num);
    }
    //using while

    // while((num/10)>0){
    //     num=num/10;
    //     count++;
    // }

    //using for
    for(count=1;(num/10)>0;count++){
        num=num/10;
    }
    printf("The number of digits of given number is : %d",count);
    return 0;
}