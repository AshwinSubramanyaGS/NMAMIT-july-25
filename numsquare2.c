/*C Program to Generate numerical patterns
	5 4 3 2 1 
	5 4 3 2 1 
	5 4 3 2 1 
	5 4 3 2 1 
	5 4 3 2 1 

    inp 5
*/
#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",n-j);

        printf("\n");
    }
}