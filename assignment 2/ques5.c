//calculate profit and loss for selling 25 bananas.
#include<stdio.h>
int main(){
    float cost_price_per_dozen,
    selling_price_per_dozen,
    profit,
    loss,
    cp_per_banana,
    sp_per_banana;
    printf("Enter c.p and s.p for 1 dozen of bananas:");
    scanf("%f%f",&cost_price_per_dozen,&selling_price_per_dozen);
    cp_per_banana = cost_price_per_dozen/12;
    sp_per_banana = selling_price_per_dozen/12;
    if (sp_per_banana>=cp_per_banana){
        profit = (sp_per_banana-cp_per_banana)*25;
        printf("Profit for selling 25 bananas is:%.2f",profit);
    }
    else{
        loss=(cp_per_banana-sp_per_banana)*25;
        printf("loss for selling 25 bananas is:%.2f",loss);
    }
    return 0;
}