//function to store all words in a given string which are starting from 'a' in a 2d char array.
#include<stdio.h>
#include<string.h>
int awords(char str[50],char[][50]);
int main()
{
    char str[50];
    int res;
    printf("Enter a string:");
    fgets(str,50,stdin);
    if(str[strcspn(str,"\n")]=='\n')
        str[strcspn(str,"\n")]='\0';
    char result[50][50];
    res = awords(str,result);
    for(int i=0;i<res;i++)
        printf("%d-%s\n",i+1,result[i]);
    return 0;
}

int awords(char str[50],char result[][50])
{
    int i;
    int k=0;
    for(i=0;str[i];i++)
    {
        int l=0;
        if((str[i]=='a'||str[i]=='A')&& i>=0)
        {
            int j;
            if(i==0)
            {
                for(j=i;(str[j]!=' ') && (str[j]!=',') && (str[j]!='.');j++)
                {
                    result[k][l]=str[j];
                    l++;
                }
                result[k][l]='\0';
                k++;
            }
            else if((str[i-1]==' ')||(str[i-1]==',')||(str[i-1]=='.'))
            {
                for(j=i;(str[j]!=' ') && (str[j]!=',') && (str[j]!='.');j++)
                {
                    result[k][l]=str[j];
                    l++;
                }
                result[k][l]='\0';
                k++;
            }
        }
    }
    return k;
}