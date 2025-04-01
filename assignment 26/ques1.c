//recursive function to print first n even numbers in reverse order.
#include <stdio.h>
void FirstNnaturalNumsevenrev(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        FirstNnaturalNumsevenrev(n-1);
    }
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    FirstNnaturalNumsevenrev(n);
    return 0;
}