//matrix multiplication
#include <stdio.h>
int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int resmatrix[3][3];
    printf("Enter 3 rows for matrix1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter 3 rows for matrix2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int sum=0;
            for(int k=0;k<3;k++)
            {
                sum =sum + matrix1[i][k] * matrix2[k][j];
            }
            resmatrix[i][j] = sum;
        }
    }
    printf("resulted matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==2)
                printf("%d \n",resmatrix[i][j]);
            else
                printf("%d  ",resmatrix[i][j]);
        }
    }
    return 0;
}