//function to move first value of the array to the position where all smaller values will be the left and greater values will be in the right.
#include <stdio.h>
void sort(int *arr,int size);
int main()
{
    int arr[50],size;
    printf("Enter size of an array:");
    scanf("%d",&size);
    sort(arr,size);
    int i;
    printf("Moved to the required position:");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}
void sort(int *arr,int size)
{
    //taking input
    int i,j;
    for(i=0;i<size;i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&arr[i]);
    }
    //sort logic
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}