/*
A B C D C B A
  A B C B A
    A B A
      A
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j>=i)
                printf("%c ",65+j-i);
            else
                printf("  ");
        }
        for(j=1;j<=3;j++){
            if(j<=4-i)
                printf("%c ",65+(4-i)-j);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}