//take input of 5 subjects from user and determine whether he passed or failed if passing mark is 33 out of 100.
#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter 5 subject marks : ");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    if((sub1>=33&&sub1<=100)&&(sub2>=33&&sub2<=100)&&(sub3>=33&&sub3<=100)&&(sub4>=33&&sub4<=100)&&(sub5>=33&&sub5<=100))
        printf("You passed the examination");
    else
        printf("You failed the exam (or)/you entered marks out of range(100)");
    return 0;
}