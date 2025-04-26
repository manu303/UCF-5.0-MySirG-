//function to sort an array of an int type values.
#include <stdio.h>
void sort(int *ptr,int size);
int main()
{
    int arr[50];
    int size;
    printf("enter size of array:");
    scanf("%d",&size);
    sort(arr,size);
    int i;
    printf("Sorted array:");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}
void sort(int *ptr,int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        printf("enter %d number:",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                int temp;
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}