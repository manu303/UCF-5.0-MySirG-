//function to convert a given string into uppercase.
#include<stdio.h>
#include<string.h>
void uppercase(char *str);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    uppercase(str);
    printf("uppercase string:%s",str);
    return 0;
}

void uppercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
}