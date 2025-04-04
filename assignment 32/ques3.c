//print unique elemnts in an array.
#include <stdio.h>
void UnqElement(int arr[],int size)
{
    int visited[size],inner,outer;
    for(int i=0;i<size;i++)
        visited[i]=0;
    printf("unique elements are:");
    for(outer = 0;outer<size;outer++)
    {
        if(visited[outer]==1)
                continue;
        for(inner = outer+1;inner<size;inner++)
        {
            if(arr[outer] == arr[inner])
                {
                    visited[inner] = 1;
                }
        }
        printf("%d ",arr[outer]);
    }
    
}
int main() {
    int size,inp;
    printf("Enter size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers",size);
    for(inp=0;inp<size;inp++)
        scanf("%d",&arr[inp]);
    UnqElement(arr,size);
    return 0;
}