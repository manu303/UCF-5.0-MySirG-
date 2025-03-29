//program to input 3 characaters from the user and print their corresponding ascii code.
#include<stdio.h>
int main(){
    
    char character1,character2,character3;
    printf("Enter any 3 charcaters:");
    scanf("%c %c %c",&character1,&character2,&character3);
    printf("The ASCII Codes are:%d,%d,%d",character1,character2,character3);
    return 0;

}