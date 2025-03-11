/*
      1       
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        int k=1;
        for(j=1;j<=4;j++){
            if(j>=5-i){
                printf("%d ",k);
                k++;
            }
            else
                printf("  ");
        }
        for(j=1;j<=3;j++){
            if(j<i)
                printf("%d ",i-j);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}