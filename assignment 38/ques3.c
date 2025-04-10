//count words in a given string
#include<stdio.h>
void trimstr(char str[]);
int countwords(char str[]);
int main()
{
    char str[100];
    int result;
    printf("Enter a string:");
    fgets(str,100,stdin);
    result = countwords(str);
    printf("The no of words in the given string is %d",result);
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

int countwords(char str[])
{
    trimstr(str);
    int i,count=1,len=0,ch=0;
    while(str[len])
        len++;
    if(len==0)
        return 0;
    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') || (str[i]>='0'&&str[i]<='9'))
            ch++;
    }
    if(ch==0)
        return 0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32 || str[i]==44 || str[i]==46 || str[i]==9 || str[i]==10 || str[i]==58 || str[i]==59 || str[i]==63 || str[i]==33 || str[i]==40 || str[i]==41)
        {
            if((str[i+1]>='a'&&str[i+1]<='z') || (str[i+1]>='A'&&str[i+1]<='Z') || (str[i+1]>='0'&&str[i+1]<='9'))
            {
                count++;
            }
            else
            {
                continue;
            }
        }
    }
    return count;
}