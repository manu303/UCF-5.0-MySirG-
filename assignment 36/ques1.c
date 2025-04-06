//function to calculate length of the string.
#include<stdio.h>
char strlength(char str[])
{
    int i;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    for(i=0;str[i];i++);
    return i;
}

int main()
{
    char str[50];
    int res;
    res = strlength(str);
    printf("The length of the string is %d",res);
    return 0;
}