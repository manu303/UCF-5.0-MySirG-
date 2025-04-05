//program to copy one string to another char array.
#include<stdio.h>
int main()
{
    char str[50],newstr[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    int i;
    for(i=0;str[i]!=0;i++);
    if(str[i]=='\n')
        str[i]='\0';
    for(i=0;str[i];i++)
    {
        newstr[i]=str[i];
    }
    newstr[i]='\0';
    printf("Original String:%s",str);
    printf("New String:%s",newstr);
    return 0;
}