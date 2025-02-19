//calculate profit and loss for selling 25 bananas.
#include<stdio.h>
int main(){
    float cp,sp;
    printf("Enter cost price and selling price for 1 dozen of bananas:");
    scanf("%f%f",&cp,&sp);
    printf("The profit or loss is : %0.2f",(sp-cp)/12*25);
    return 0;
}