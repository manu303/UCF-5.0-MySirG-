//function to print first N natural numbers.(takes something return nothing)
#include<stdio.h>
void nat_nums(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    nat_nums(n);
    return 0;
}

void nat_nums(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d ",i);
}
