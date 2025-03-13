//switch-case problems
//program to take month number as input and display no of days
#include<stdio.h>
int main(){
    int month;
    printf("Enter month number(1-12): ");
    scanf("%d",&month);
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31days");
            break;
        case 4: case 6: case 9: case 11:
            printf("30days");
            break;
        case 2: 
            printf("28days");
            break;
        default:
            printf("Please enter valid month number(1-2)");
    }
    return 0;
}