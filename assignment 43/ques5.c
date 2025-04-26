#include <stdio.h>
int highest_marks(int *class1, int *class2, int *class3, int *class4, int *class5, int size1, int size2, int size3, int size4, int size5);
int main()
{
    int class1[50], class2[50], class3[50], class4[50], class5[50];
    int size1, size2, size3, size4, size5;
    printf("Enter size of 1st array:");
    scanf("%d", &size1);
    printf("Enter size of 2nd array:");
    scanf("%d", &size2);
    printf("Enter size of 3rd array:");
    scanf("%d", &size3);
    printf("Enter size of 4th array:");
    scanf("%d", &size4);
    printf("Enter size of 5th array:");
    scanf("%d", &size5);
    int i;
    printf("1st class:\n");
    for (i = 0; i < size1; i++)
    {
        printf("Enter student %d marks:", i + 1);
        scanf("%d", &class1[i]);
    }
    printf("2nd class:\n");
    for (i = 0; i < size2; i++)
    {
        printf("Enter student %d marks:", i + 1);
        scanf("%d", &class2[i]);
    }
    printf("3rd class:\n");
    for (i = 0; i < size3; i++)
    {
        printf("Enter student %d marks:", i + 1);
        scanf("%d", &class3[i]);
    }
    printf("4th class:\n");
    for (i = 0; i < size4; i++)
    {
        printf("Enter student %d marks:", i + 1);
        scanf("%d", &class4[i]);
    }
    printf("5th class:\n");
    for (i = 0; i < size5; i++)
    {
        printf("Enter student %d marks:", i + 1);
        scanf("%d", &class5[i]);
    }
    int res;
    res = highest_marks(class1, class2, class3, class4, class5, size1, size2, size3, size4, size5);
    printf("\nThe highest marks among all classes is %d marks.", res);
    return 0;
}

int highest_marks(int *class1, int *class2, int *class3, int *class4, int *class5, int size1, int size2, int size3, int size4, int size5)
{
    int *p[5];
    p[0] = class1;
    p[1] = class2;
    p[2] = class3;
    p[3] = class4;
    p[4] = class5;
    int ans[50];
    int i, j;
    for (i = 0; i < size1; i++)
    {
        for (j = i + 1; j < size1; j++)
        {
            if (p[0][i] < p[0][j])
            {
                int temp;
                temp = p[0][i];
                p[0][i] = p[0][j];
                p[0][j] = temp;
            }
        }
    }
    ans[0] = p[0][0];
    for (i = 0; i < size2; i++)
    {
        for (j = i + 1; j < size2; j++)
        {
            if (p[1][i] < p[1][j])
            {
                int temp;
                temp = p[1][i];
                p[1][i] = p[1][j];
                p[1][j] = temp;
            }
        }
    }
    ans[1] = p[1][0];
    for (i = 0; i < size3; i++)
    {
        for (j = i + 1; j < size3; j++)
        {
            if (p[2][i] < p[2][j])
            {
                int temp;
                temp = p[2][i];
                p[2][i] = p[2][j];
                p[2][j] = temp;
            }
        }
    }
    ans[2] = p[2][0];
    for (i = 0; i < size4; i++)
    {
        for (j = i + 1; j < size4; j++)
        {
            if (p[3][i] < p[3][j])
            {
                int temp;
                temp = p[3][i];
                p[3][i] = p[3][j];
                p[3][j] = temp;
            }
        }
    }
    ans[3] = p[3][0];
    for (i = 0; i < size5; i++)
    {
        for (j = i + 1; j < size5; j++)
        {
            if (p[4][i] < p[4][j])
            {
                int temp;
                temp = p[4][i];
                p[4][i] = p[4][j];
                p[4][j] = temp;
            }
        }
    }
    ans[4] = p[4][0];
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (ans[i] < ans[j])
            {
                int temp;
                temp = ans[i];
                ans[i] = ans[j];
                ans[j] = temp;
            }
        }
    }
    return ans[0];
}