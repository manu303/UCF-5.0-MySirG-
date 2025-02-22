//calculate profit/loss percentage by taking cp and sp from user.
#include<stdio.h>
int main(){
    float cp,sp;
    printf("Enter cost price and selling price: ");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
        printf("The profit is %.2f%%\n",(sp-cp)/cp*100);
    else
        printf("The loss is %.2f%%",(cp-sp)/cp*100);
    return 0;
}