/*
1
21
321
4321
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j<=i)
                printf("%d ",(i-j+1));
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}