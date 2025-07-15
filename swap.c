#include<stdio.h>

int main(){
    int n=12,m=14;
    printf("%d %d",n,m);
    n=n^m;
    m=n^m;
    n=n^m;
    printf("\nafter:%d %d",n,m);
}