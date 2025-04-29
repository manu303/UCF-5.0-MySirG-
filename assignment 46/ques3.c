//program to calulate the sum of n numbers entered by the user using malloc  and free.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter how many values you want to enter:");
    int n;
    scanf("%d",&n);
    float *ptr=NULL;
    ptr = (float*)malloc(n*sizeof(float));
    if(ptr==NULL)
    {
        printf("memory allocation error");
        exit(0);
    }
    int i;
    for(i=0;i<n;i++)
    {
        float data;
        printf("Enter data point %d:",i+1);
        scanf("%f",&data);
        ptr[i] = data;
    }
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+ptr[i];
    }
    printf("The sum of %d data points is %.2f",n,sum);
    free(ptr);
    return 0;
} 