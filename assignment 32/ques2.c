//function to count a total number of duplicate elements in an array.
#include <stdio.h>
int FreqOfUnqElement(int arr[],int size)
{
    int visited[size],inner,outer,duplicate=0;
    for(int i=0;i<size;i++)
        visited[i]=0;
    for(outer = 0;outer<size;outer++)
    {
        if(visited[outer]==1)
                continue;
        int count=0;
        for(inner = outer+1;inner<size;inner++)
        {
            if(arr[outer] == arr[inner])
                {
                    count++;
                    visited[inner] = 1;
                }
        }
        if(count>0)
            duplicate++;
    }
    return duplicate;
    
}
int main() {
    int size,inp,res;
    printf("Enter size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers",size);
    for(inp=0;inp<size;inp++)
        scanf("%d",&arr[inp]);
    res = FreqOfUnqElement(arr,size);
    printf("Total Number of Duplicate Elements in given Array is %d",res);
    return 0;
}