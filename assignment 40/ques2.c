//program to find the number of vowels in each of the strings stored in 2 dim array,taken from the user.
#include<stdio.h>
#include<string.h>
void inputstrs(char str[][50],int s,int len);
int main()
{
    char str[5][50],vowels[]="aeiouAEIOU";
    inputstrs(str,5,50);

    int i,j,k;
    for(i=0;i<5;i++)
    {
        int count=0;
        str[i][strlen(str[i])-1]='\0';
        for(j=0;str[i][j];j++)
        {
            for(k=0;vowels[k];k++)
            {
                if(str[i][j]==vowels[k])
                {
                    count++;
                    break;
                }
            }
        }
        printf("string%d -> vowels-%d\n",i+1,count);
    }
    return 0;
}
//function to take input from multiple strings
void inputstrs(char str[][50],int s,int len)
{
    printf("Enter %d strings:",s);
    int i;
    for(i=0;i<s;i++)
        fgets(str[i],len,stdin);
}