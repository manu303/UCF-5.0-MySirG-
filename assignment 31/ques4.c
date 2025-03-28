// Online C compiler to run C program online
#include <stdio.h>
int input(int b[],int size);
int rotate_arr_left(int c[],int d[],int size,int pos);
int rotate_arr_right(int e[],int f[],int size,int pos);
int printarr(int g[],int size);
int main() {
    int size;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    printf("Enter %d numbers: ",size);
    int a[size];
    int b[size];
    input(a,size);
    int pos,dir;
    printf("Enter number of positions: ");
    scanf("%d",&pos);
    if(pos>size)
        pos = pos%size;
    printf("Enter direction for left enter 1,for right enter 0:");
    scanf("%d",&dir);
    if(dir)
    {
        rotate_arr_left(a,b,size,pos);
        printf("Rotated array is:");
        printarr(b,size);
    }
    else
    {
        rotate_arr_right(a,b,size,pos);
        printf("Rotated array is:");
        printarr(b,size);
    }
    return 0;
}

int input(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
        scanf("%d",&b[i]);
}

int rotate_arr_left(int c[],int d[],int size,int pos)
{
    for(int i=0;i<size;i++)
    {
        if(size-pos+i < size)
        {
            d[size-pos+i] = c[i];
        }
        else if(i<size)
        {
            d[(size-pos+i)%size] = c[i];
        }
    }  
    
}

int rotate_arr_right(int e[],int f[],int size,int pos)
{
    for(int i=0;i<size;i++)
    {
        if(pos+i < size)
        {
            f[pos+i] = e[i];
        }
        else if(i<size)
        {
            f[(pos+i)%size] = e[i];
        }
    }
    
}

int printarr(int g[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",g[i]);
}
