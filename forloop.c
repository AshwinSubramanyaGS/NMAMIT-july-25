#include<stdio.h>

int main(){
    /* for(int i=0,j=10,k=100;i<5;printf("\n%d %d %d",i),i++);
    printf("\nend of main\n"); */

    for(int i=0,j=10,k=100;i<5; i++ ,j+=10 ,k*=100)
        printf("\n%d %d %d",i,j,k);
    printf("\nend of main\n");
    
}