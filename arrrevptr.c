//Reverse an integer array using 2 pointers
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n,*left,*right;

    printf("Enter the no of elements");

    scanf("%d",&n);
    a = (int*) malloc(n * sizeof(int));
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    left = a;
    right = &a[n-1];
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        right--;
    
    }
    printf("The reversed array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    } 
    free(a);
}