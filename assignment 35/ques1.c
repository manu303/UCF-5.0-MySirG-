//convert string into lowercase
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s",str);
    return 0;
}