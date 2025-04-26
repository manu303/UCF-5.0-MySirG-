//swap two strings of two char arrays.
#include <stdio.h>
#include<string.h>
void swap_strs(char *arr1,char *arr2);
int main()
{
    char arr1[50];
    printf("enter 1st string:");
    fgets(arr1,50,stdin);
    arr1[strlen(arr1)-1]='\0';
    char arr2[50];
    printf("enter 2nd string:");
    fgets(arr2,50,stdin);
    arr2[strlen(arr2)-1]='\0';
    swap_strs(arr1,arr2);
    printf("arr1:%s\n",arr1);
    printf("arr2:%s",arr2);
    return 0;
}
void swap_strs(char *arr1,char *arr2)
{
    char temp[50];
    int i;
    for(i=0;arr1[i];i++)
    {
        temp[i]=arr1[i];
    }
    temp[i]='\0';
    for(i=0;arr2[i];i++)
    {
        arr1[i]=arr2[i];
    }
    arr1[i]='\0';
    for(i=0;temp[i];i++)
    {
        arr2[i]=temp[i];
    }
    arr2[i]='\0';
}