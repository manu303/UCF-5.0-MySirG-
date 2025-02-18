//program to print size of an int,a float,a char and a double type variable.
#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    printf("size of int=%d,float=%d,char=%d,double=%d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}