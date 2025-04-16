//program to sort 10 city names 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][50];
    //taking input from user
    int i,j;
    char temp[50];
    printf("Enter 10 strings:");
    for(i=0;i<10;i++)
        fgets(str[i],50,stdin);

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(str[i],str[j])==1)
                {
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],temp);
                }
        }
    }
    printf("\nSorted list:\n");
    for(i=0;i<10;i++)
        printf("%d-%s",i+1,str[i]);
    return 0;
}