//count vowels in a given string
#include<stdio.h>
int main()
{
    char str[50];
    char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
    printf("Enter a string:");
    fgets(str,50,stdin);
    int count = 0;
    for(int i=0;str[i];i++)
    {
        for(int j=0;j<10;j++)
        {
            if(str[i]==vowels[j])
                count++;
        }
    }
    printf("The number of vowels in given string is %d",count);
    return 0;
}