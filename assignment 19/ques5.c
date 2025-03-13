//convert from if else to switch case 
#include<stdio.h>
int main(){
    int var;
    printf("Enter input(1-3):");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
        printf("good");
        break;

        case 2:
        printf("better");
        break;

        case 3:
        printf("best");
        break;

        default:
        printf("Invalid");
        
    }
    return 0;
}