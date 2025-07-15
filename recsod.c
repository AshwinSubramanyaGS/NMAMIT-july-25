#include<stdio.h>

int sod(int );

int main(){
    int no;
    scanf("%d",&no);
    printf("the sum of digits of %d is %d",no,sod(no));
    return 0;
}

int sod(int n){
    if(n<=0) return 0;
    return n%10+sod(n/10);
}