//count vowels in a given string
#include<stdio.h>
int main()
{
    char str[50];
    char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
    int i,j;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    int count = 0;
    for(i=0;str[i];i++)
    {
        for(j=0;j<10;j++)
        {
            if(str[i]==vowels[j])
                count++;
        }
    }
    printf("The number of vowels in given string is %d",count);
    return 0;
}