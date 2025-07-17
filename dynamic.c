//wap declare 2 arrays of which first is of size 5 and the 5th element of array 1 has the size of second array.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5],*b;
    for(int i=0;i<5;scanf("%d",&a[i++]));
    b=(int*)calloc(a[4],sizeof(int));
    printf("b is allocated a size %d",a[4]);

    free(b);
}