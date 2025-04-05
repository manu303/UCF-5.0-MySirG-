//count spaces in given string
#include<stdio.h>
int main()
{
    char str[50],i;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    int count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
            count++;
    }
    printf("\nThe occurence of space in the given string is %d times.",count);
    return 0;
}