//function to trim a string
#include<stdio.h>
void trimstr(char str[]);

int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    trimstr(str);
    printf("Trimmed string is [%s]",str);
    return 0;
}

void trimstr(char str[])
{
    int start,end,i=0,len=0,j,k;
    //calculating len of string
    while(str[len]!='\0')
        len++;
    if(len==0)
        return;
    //finding starting index at which non space character will be present
    while( (i>=0) && ((str[i]>=9 && str[i]<=13) || (str[i]==32)))
        i++;
    start=i;
    //finding ending index at which non space character will be present
    while((len>0) && ((str[len-1]>=9 && str[len-1]<=13) || (str[len-1]==32)))
        len--;
    end = len-1;
    if(start>end)
    {
        str[0]='\0';
        return;
    }
    else
    {
        k=start;
        for(j=0;j<=(end-start);j++)
        {
            str[j] = str[k];
            k++;
        }
        str[j]='\0';
    }

}