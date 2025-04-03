//function to count frequency of each element of an array.
#include <stdio.h>

int freq(int a[],int element,int n,int index)
{
    int j,count=0;
    for(j=1;j<n;j++)
    {
        if(index == j)
            continue;
        if(a[j] == element)
        {
            if(a[index-1] == a[j])
                break;
            count = count+1;
        }
        else
            continue;
    }
    return count;
}

int main() {
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int res;
        res = freq(a,a[i],n,i);
        if(res==0)
        {
            continue;
        }
        printf("%d - %dtimes\n",a[i],res);
    }
    return 0;
}