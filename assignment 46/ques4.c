//function to merge two array elements and store it in dynamically created array.Return address of this dynamically created array.
#include<stdio.h>
#include<stdlib.h>
void input(int *arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter %d element:",i+1);
        int data;
        scanf("%d",&data);
        arr[i]=data;
    }
}
int *merge_arr(int *arr1,int *arr2,int size1,int size2)
{
    int *arr3=NULL;
    arr3 = (int*)malloc((size1+size2)*sizeof(int));
    if(arr3==NULL)
    {
        printf("memory allocation failed");
        return NULL;
    }
    int i;
    for(i=0;i<size1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=size1;i<(size1+size2);i++)
    {
        arr3[i] = arr2[i-size1];
    }
    return arr3;
}
int main()
{
    int *arr1=NULL,*arr2=NULL,*res=NULL;
    int n1,n2;
    printf("Enter size of 1st array:");
    scanf("%d",&n1);
    arr1 = (int*)malloc(n1*sizeof(int));
    if(arr1==NULL)
    {
        printf("memory allocation failed");
        exit(0);
    }
    printf("Enter size of 2nd array:");
    scanf("%d",&n2);
    arr2 = (int*)malloc(n2*sizeof(int));
    if(arr2==NULL)
    {
        printf("memory allocation failed");
        exit(0);
    }
    printf("Array1:\n");
    input(arr1,n1);
    printf("Array2:\n");
    input(arr2,n2);
    res = merge_arr(arr1,arr2,n1,n2);
    if(res!=NULL)
    {
        int i;
        printf("\nMerged array:");
        for(i=0;i<(n1+n2);i++)
        {
            printf("%d ",res[i]);
        }
        free(res);
        free(arr1);
        free(arr2);
    }
    return 0;
}