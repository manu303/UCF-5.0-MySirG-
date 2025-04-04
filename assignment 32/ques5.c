//function to count frequency of each element of an array.
#include <stdio.h>
void FreqOfUnqElement(int arr[],int size)
{
    int visited[size],inner,outer;
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
        printf("%d-%dtimes\n",arr[outer],count);
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
    FreqOfUnqElement(arr,size);
    return 0;
}