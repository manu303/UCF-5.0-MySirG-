//a 2d array is full with 10 email ids.write a function to find how many of them belongs to gmail.com
#include<stdio.h>
#include<string.h>
int gmailcount(char mails[][50]);
int main()
{
    int res;
    char mails[10][50];
    res = gmailcount(mails);
    printf("\nThere are %d mails belongs to gmail.com",res);
    return 0;
}

int gmailcount(char mails[][50])
{
    //taking input
    printf("Enter 10 mails:");
    int i,j,count=0;
    for(i=0;i<10;i++)
    {
        fgets(mails[i],50,stdin);
        if(mails[i][strcspn(mails[i],"\n")]=='\n')
            mails[i][strcspn(mails[i],"\n")]='\0';   
    }
    char check[11]="moc.liamg@";
    for(i=0;i<10;i++)
    {
        if(strlen(mails[i])>=11)
        {
            for(j=0;j<10;j++)
            {
                if(mails[i][(strlen(mails[i])-1)-j]!=check[j])
                    break;
            }
            if(j==10)
            {
                count++;
            }
        }
         
    }
    return count;
}