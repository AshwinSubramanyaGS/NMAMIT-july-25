/*C Program to Generate numerical patterns
	5 4 3 2 1 
	5 4 3 2   
	5 4 3 
	5 4 
	5 

    inp 5

    challenge only
            5
		  4 5
		3 4 5
	  2 3 4 5
	1 2 3 4 5
*/
#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>=n-1-i)
                printf("%d ",j+1);
            else 
                printf("  ");
        }
            

        printf("\n");
    }
}