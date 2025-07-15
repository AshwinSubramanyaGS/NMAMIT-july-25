#include<stdio.h>
/*
    ? : -> ternary operator
    conditionalstatement ? iftrue value : iffalse value 
*/
int main(){
    int n=7,m=80,p=55;
    printf("largest: %d",n>m ?n>p ?n :p : m>p? m : p );
}