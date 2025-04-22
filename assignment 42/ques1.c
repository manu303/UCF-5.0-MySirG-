//function to swap values of two int varaibles using pointers.
#include<stdio.h>
void swapnums(int *p,int *q);
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d b=%d\n",a,b);
    swapnums(&a,&b);
    printf("After swapping a=%d b=%d",a,b);
    return 0;
}
void swapnums(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}