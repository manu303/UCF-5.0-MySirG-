//program to ask user to input a number of data values like to enter then create an array dynamically to accomodate the data values.Now take the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter how many values you want to enter:");
    int n;
    scanf("%d",&n);
    float *ptr;
    ptr = (float*)malloc(n*sizeof(float));
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
    printf("The average of %d data points is %.2f",n,sum/(n*1.0));
    return 0;
} 