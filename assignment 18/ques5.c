/*
A B C D E F G 
  A B C D E 
    A B C 
      A 
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=8-i;j++){
            if(j>=i)
                printf("%c ",65+j-i);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}