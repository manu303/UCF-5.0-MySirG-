//input length of 3 sides of triangle from user tyhen find whether it forms valid triangle or not.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 sides of triangle length a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
        printf("Forms a valid trianngle.");
    else
        printf("won't Form a valid trianngle.");    
    return 0;
}