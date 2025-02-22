//program which takes the month number number as an input and display number of days in that month.assuming it as a normal year.
#include<stdio.h>
int main(){
    int month;
    printf("Enter the month in number format (1-12): ");
    scanf("%d",&month);
    if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
        printf("Number of days in given month %d is %d",month,31);
    else if((month==4)||(month==6)||(month==9)||(month==11))
        printf("Number of days in given month %d is %d",month,30);
    else if((month==2))
        printf("Number of days in given month %d is %d",month,28);
    else
        printf("please enter valid month.");
    return 0;
}

