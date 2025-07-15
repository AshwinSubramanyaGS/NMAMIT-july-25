//C program that has a frunction mysort which sorts array in asending order
#include<stdio.h>
void mysort(int [],int );
void mysort2(int [],int );

int main(){
    int n=12,a[10],i=0,j=0;
    scanf("%d",&n);
    for(int i=0;i<n; scanf("%d",&a[i]),i++);//array input

    printf("Original array: ");
    for(int i=0;i<n; printf(" %d",a[i]),i++);//printing original array
    
    //Sorting logic bubble sort
    mysort2(a,n);
    printf("Sorted array: ");
    for(int i=0;i<n; printf(" %d",a[i]),i++);//printing original 
    
    return 0;
}

void mysort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){//swapping logic
                a[j]=a[j]*a[j+1];
                a[j+1]=a[j]/a[j+1];
                a[j]=a[j]/a[j+1];
            }
        }
    }
}
void mysort2(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        int tem=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[tem])
                tem=j;
        }
        if(i!=tem){
            a[i]=a[i]+a[tem];
            a[tem]=a[i]-a[tem];
            a[i]=a[i]-a[tem];
        }
    }
}