/*  A B C D E D C B A
	A B C D   D C B A
	A B C       C B A 
	A B           B A
	A               A
*/
#include <stdio.h>

int main()
{
    int i=0,j=0,n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
                if(j<n-i)
                printf("%c ",'A'+j);
                else
                printf("  ");
        }
        j-=2;
        for(;j>=0;j--)
        {
                if(j<n-i)
                printf("%c ",'A'+j);
                else
                printf("  ");        
        }       
        printf("\n");    
    }
    return 0;
}