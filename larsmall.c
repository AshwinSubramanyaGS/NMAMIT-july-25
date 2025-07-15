//C Program to find smallest and largest no in an array
#include<stdio.h>

int main(){
    int n=12,a[10],lar=0,small=0;
    scanf("%d",&n);
    for(int i=0;i<n; scanf("%d",&a[i]),i++);
    lar=small=a[0];
    for(int i=1;i<n; i++){
        if(lar<a[i])lar=a[i];
        if(small>a[i])small=a[i];
    }
    printf("Largest %d\nSmallest %d",lar,small);
    return 0;
}