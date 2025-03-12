/*
1 2 3 4 3 2 1 
1 2 3   3 2 1 
1 2       2 1 
1           1
*/
#include<stdio.h>
int main(){
    int row,col,i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(row=n;row>=1;row--){
        if(row==n){
            for(i=1;i<=n;i++){
                printf("%d ",i);
            }
            for(i=n-1;i>=1;i--){
                printf("%d ",i);
            }
            printf("\n");
        }
        else{

            for(col=1;col<=row;col++){
                printf("%d ",col);
            }

            for(col=1;col<=(2*n-2*row)-1;col++){
                printf("  ");
            }
            
            for(col=row;col>=1;col--){

                printf("%d ",col);
            }
            printf("\n");
        }
    }
    return 0;
}