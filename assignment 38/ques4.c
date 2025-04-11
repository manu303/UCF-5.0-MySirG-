//function to reverse a string word wise.
#include<stdio.h>
void revwords(char str[]);
void trimstr(char str[]);
int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,150,stdin);
    revwords(str);
    return 0;
}
void revwords(char str[])
{
    //length of a string
    int len=0,j;
    while(str[len])
    {
        len++;
    }
    //main logic
    for(len;len>0;len--)
    {
        if(str[len-1]==' ')
        {
            for(j=len;((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9'));j++)
            {
                printf("%c",str[j]);
            }
            printf(" ");
        }
    }
    for(j=0;((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9'));j++)
    {
        printf("%c",str[j]);
    }
}
