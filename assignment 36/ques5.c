//function to transform string into lowercase
#include<stdio.h>

char lowercase(char str[])
{
    printf("Enter a string:");
    fgets(str,50,stdin);
    int i;
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i]+32;
    }
}
int main()
{
    char str[50];
    lowercase(str);
    printf("The Transformed string is:%s",str);
    return 0;
}