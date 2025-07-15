/*C Program to Generate numerical patterns
	1 2 3 4 5
	1 2 3 4 5 
	1 2 3 4 5
	1 2 3 4 5
	1 2 3 4 5

    inp 5
*/
#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d",j+1);

        printf("\n");
    }
}