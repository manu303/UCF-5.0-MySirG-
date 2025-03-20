//function to calculate simple intrest(take something return something type)
#include<stdio.h>
int main(){
    float intrest(float principle_amt,float time,float rate);//function declaration
    float principle_amt,time,rate,result;
    printf("Enter principle amt,time in years and rate: ");
    scanf("%f%f%f",&principle_amt,&time,&rate);
    result = intrest(principle_amt,time,rate);//function call
    printf("The simple intrest is %.2f",result);
    return 0;
}
//function definition
float intrest(float principle_amt,float time,float rate){
    return (principle_amt*time*rate)/100;
}