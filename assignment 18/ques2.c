/*
*******
 ***** 
  *** 
   *
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j>=i)
                printf("* ");
            else
                printf("  ");
        }
        for(j=1;j<=3;j++){
            if(j<=4-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}