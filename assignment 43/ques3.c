//function to merge two arrays in a given array.
#include <stdio.h>
void mergearr(int *arr1,int size1,int *arr2,int size2,int *arr3);
int main()
{
    int arr1[50],arr2[50],arr3[50];
    int size1,size2;
    printf("enter size for 1st array:");
    scanf("%d",&size1);
    printf("enter size for 2nd array:");
    scanf("%d",&size2);
    mergearr(arr1,size1,arr2,size2,arr3);
    printf("merged array:");
    int i;
    for(i=0;i<(size1+size2);i++)
        printf("%d ",arr3[i]);
    return 0;
}
void mergearr(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    //talking input
    int i,j=0;
    for(i=0;i<(size1+size2);i++)
    {
        if(i<size1)
        {
            printf("enter %d number",i+1);
            scanf("%d",&arr1[i]);
        }
        else if(i<(size2+size1))
        {
            printf("enter %d number for 2nd array",j+1);
            scanf("%d",&arr2[j]);
            j++;
        }
            
    }
    j=0;
    for(i=0;i<(size1+size2);i++)
    {
        if(i<size1)
        {
            arr3[i]=arr1[i];
        }
        else if(i<(size2+size1))
        {
            arr3[i]=arr2[j];
            j++;
        }
            
    }
}
