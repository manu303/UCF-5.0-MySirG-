//function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive) and store the extracted string in another char array.
#include<stdio.h>
#include<string.h>
void extract_string(char *str,int start_index,int end_index,char *result);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    int start_index;
    printf("Enter start index:");
    scanf("%d",&start_index);
    int end_index;
    printf("Enter end index:");
    scanf("%d",&end_index);
    char result[50];
    extract_string(str,start_index,end_index,result);
    printf("Extracted string:%s",result);
    return 0;
}

void extract_string(char *str,int start_index,int end_index,char *result)
{
    int i,j=0;
    for(i=start_index;i<end_index;i++)
    {
        result[j]=str[i];
        j++;
    }
    result[j]='\0';
}