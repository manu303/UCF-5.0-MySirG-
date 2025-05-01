//revisiting c in 1st assignment but writing in c++ source file as c++ is superset of c.
//program to check whether given number is even or odd.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is even number.",num);
    else
        printf("%d is odd number.",num);
    return 0;
}