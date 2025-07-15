/*C Program to Calculate the Sum of Odd & Even Numbers in array
C Program to find smallest and largest no in an array
C Program to Find the Number of Integers Divisible by 5 in an array
*/
#include<stdio.h>

int main(){
    int n=12,a[10],sume=0,sumo=0;
    scanf("%d",&n);
    for(int i=0;i<n; scanf("%d",&a[i]),i++);
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            sume+=a[i];
        }else{
            sumo+=a[i];
        }
    }
    
    printf("even sum=%d\nodd sum=%d",sume,sumo);
}