//function to count frequency of each character of the given string.
#include<stdio.h>
void countfreq(char str[]);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    countfreq(str);
    return 0;
}

void countfreq(char str[])
{
    int len=0;
    while(str[len])
        len++;
    if(str[len-1]=='\n')
        str[len-1]='\0';
    int i=0,j=0,k=0;
    char unq[50];
    //storing each character in an unq array just one time.
    for(i=0;str[i];i++)
    {
        if(i==0)
        {
            unq[j]=str[i];
            ++j;
            unq[j]='\0';
        }
        else
        {
            int count=0;
            for(k=0;unq[k];k++)
            {
                if(unq[k]==str[i])
                {
                    count++;
                }
            }
            if(count==0)
            {
                unq[k]=str[i];
                unq[k+1]='\0';
            }
        }
    }
    for(i=0;unq[i];i++)
    {
        int freq=0;
        for(j=0;str[j];j++)
        {
            if(unq[i]==str[j])
                freq++;
        }
        printf("%c-%d times\n",unq[i],freq);
    }
}




