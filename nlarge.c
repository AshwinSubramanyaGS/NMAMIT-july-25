//C Program to find smallest and largest no in an array
#include<stdio.h>

int main(){
    int n=12,a[10],x=2,i=0,j=0;
    scanf("%d",&n);
    for(int i=0;i<n; scanf("%d",&a[i]),i++);
    for(i=0;a[x-1]==a[x-1+i];i++);
    for(j=0;a[n-x+1]==a[n-x-j];j++);
    printf("Largest %d\nSmallest %d",a[n-x-j],a[x-1+i]);
    return 0;
}