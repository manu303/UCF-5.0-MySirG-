//program to print first n terms of fibonacci numbers.
#include<stdio.h>
int main(){
    int a=0,b=1,c,term,i=1;
    printf("Enter the term that you want: ");
    scanf("%d",&term);
    if(term==0){
        printf("[]");
    }
    else if(term==1){
        printf("%d ",0);
    }
    else if(term==2){
        printf("%d %d ",0,1);
    }
    else{
        printf("%d %d ",a,b);
        while (i<=(term-2)){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        i++;
        }
    }
    
    return 0;
    
}