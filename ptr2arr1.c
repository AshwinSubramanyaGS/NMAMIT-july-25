//add 1 to all element of the array which is divisable by no x using the pointer to array.
#include<stdio.h>

int main(){
    int a[30],n=0,x=0,*p=a;
    scanf("%d",&n);

    for(int i=0;i<n;scanf("%d",&p[i++]));

    scanf("%d",&x);

    /* for(int i=0;i<n;i++){
        if(p[i]%x==0)
            p[i]++;
    } */

     for(int i=0;i<n;i++, p++){
        if(*p%x==0)
            (*p)++;
    }
    
    for(int i=0;i<n;printf("\n%d",a[i++]));


}