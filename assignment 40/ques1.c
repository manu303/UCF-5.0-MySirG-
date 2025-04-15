//function to store strings taken from user to the given 2d array
#include<stdio.h>

void inputstrs(char str[][10],int s,int len)
{
    printf("Enter %d strings:",s);
    int i;
    for(i=0;i<s;i++)
        fgets(str[i],len,stdin);
}

int main()
{
    char str[5][10];
    inputstrs(str,5,10);

    printf("You entered:\n");
    int i;
    for(i=0;i<5;i++)
        printf("string%d-%s",i+1,str[i]);
    return 0;
}