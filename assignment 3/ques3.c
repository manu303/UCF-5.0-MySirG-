//program to input 3 characaters from the user and print their corresponding ascii code.
#include<stdio.h>
int main(){
    
    char character1,character2,character3 ;
    int result1,result2,result3;
    printf("Enter any 3 charcaters consecutively:");
    scanf("%c%c%c",&character1,&character2,&character3);
    result1=character1;
    result2=character2;
    result3=character3;
    printf("The ASCII Codes are:%d,%d,%d",result1,result2,result3);
    return 0;

}