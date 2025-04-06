//function to count vowels in a given string.
#include<stdio.h>

int countvowels(char str[])
{
    int i,count=0;
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    char vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for(i=0;str[i];i++)
    {
        for(int j=0;j<10;j++)
        {
            if(str[i]==vowels[j])
                count++;
        }
    }
    return count;
}

int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    printf("Number of vowels in the given string is %d",countvowels(str));
    return 0;
}