//function to make first character of each word of the string capital
#include<stdio.h>
void firstcharcapital(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(i==0)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
        else if(str[i]==32 || str[i]==44 || str[i]==46 || str[i]==9 || str[i]==10 || str[i]==58 || str[i]==59 || str[i]==63 || str[i]==33 || str[i]==40 || str[i]==41)
        {
            if(str[i+1]>='a' && str[i+1]<='z')
            {
                str[i+1]=str[i+1]-32;
            }
        }
    }
    printf("%s",str);
}

int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    int i;
    for(i=0;str[i];i++);
    str[i-1]='\0';
    firstcharcapital(str);
    return 0;
}