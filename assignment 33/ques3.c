//matrix Transpose;
#include <stdio.h>
int main() {
    int p,q;
    printf("Enter number of rows:");
    scanf("%d",&p);
    printf("Enter number of columns:");
    scanf("%d",&q);
    int matrix[p][q];
    int resmatrix[q][p];
    printf("Enter %d rows and %d columns for matrix:\n",p,q);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<p;j++)
        {
            resmatrix[i][j] = matrix[j][i];
        }
    }
    printf("resulted matrix:\n");
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(j==p-1)
                printf("%d \n",resmatrix[i][j]);
            else
                printf("%d  ",resmatrix[i][j]);
        }
    }
    return 0;
}