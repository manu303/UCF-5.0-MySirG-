//function to search all occurrences of a given string.result of search is a list of indices to be stored in the given array.
#include<stdio.h>
#include<string.h>
void search_all_occurrences(char *str,char ch,int *arr);
int main()
{
    char str[50];
    char ch;
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter character that you want to search:");
    scanf("%c",&ch);
    int arr[50];
    search_all_occurrences(str,ch,arr);
    int i;
    for(i=0;arr[i]!=-1;i++)
        printf("%d-%d\n",i+1,arr[i]);
    return 0;
}

void search_all_occurrences(char *str,char ch,int *arr)
{
    int i,j=0;
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
        {
            arr[j]=i;
            j++;
        }
    }
    arr[j]=-1;
}