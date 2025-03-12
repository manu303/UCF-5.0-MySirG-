/*

* * * * * * * 
* * *   * * * 
* *       * * 
*           *

*/
#include<stdio.h>
int main(){
    int row,col,i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(row=n;row>=1;row--){
        if(row==n){
            for(i=1;i<=row*2-1;i++){
                printf("* ");
            }
            printf("\n");
        }
        else{

            for(col=1;col<=row;col++){
                printf("* ");
            }

            for(col=1;col<=(2*n-2*row)-1;col++){
                printf("  ");
            }
            
            for(col=1;col<=row;col++){

                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}