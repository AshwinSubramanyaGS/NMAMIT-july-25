//Recursive summation
#include<stdio.h>

int summ(int );

int main(){
    int no;
    scanf("%d",&no);
    printf("the sumation of %d is %d",no,summ(no));
    return 0;
}

int summ(int n){
    if(n<=0) return 0;
    return n+summ(n-1);
}