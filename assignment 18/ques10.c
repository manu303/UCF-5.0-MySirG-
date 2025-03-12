/*
A B C D C B A 
A B C   C B A 
A B       B A 
A           A
*/
#include<stdio.h>
int main(){
    int row,col,i,n;
    char ch;
    printf("Enter n: ");
    scanf("%d",&n);
    for(row=n;row>=1;row--){
        if(row==n){
            for(ch='A';ch<='A'+n-1;ch++){
                printf("%c ",ch);
            }
            for(ch='A'+n-2;ch>='A';ch--){
                printf("%c ",ch);
            }
            printf("\n");
        }
        else{

            for(ch='A';ch<='A'+row-1;ch++){
                printf("%c ",ch);
            }

            for(col=1;col<=(2*n-2*row)-1;col++){
                printf("  ");
            }
            
            for(ch='A'+row-1;ch>='A';ch--){

                printf("%c ",ch);
            }
            printf("\n");
        }
    }
    return 0;
}