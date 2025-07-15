//C Program to find whether a Number is Prime or Not using Recursion
#include<stdio.h>

int isprime(int ,int);

int main(){
    int no;
    scanf("%d",&no);
    printf("the number %d is %s",no,isprime(no,2)?"prime":"not prime");
    return 0;
}

int isprime(int n,int div){
    if(div>(n/2)) return 1;
    if(n%div==0) return 0;
    return isprime(n,div+1);
}