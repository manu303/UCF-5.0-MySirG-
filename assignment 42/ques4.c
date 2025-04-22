//function to convert string into lowercase
#include<stdio.h>
#include<string.h>
void lowercase(char *str);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    lowercase(str);
    printf("Lowercase string:%s",str);
    return 0;
}

void lowercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
}