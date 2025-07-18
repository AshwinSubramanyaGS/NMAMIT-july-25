#include<stdio.h>

int lsearch(int*,int,int);
int main(){
    int arr[]={1,2,3,4,5,6,7},n=7,key=8;
    
    printf("the key %d is %s",key,lsearch(arr,n,key)>-1?"found":"not found");

}
int recbinsearch(int *a,int key,int low,int high){
    int mid=(low+high)/2;
    if(low>high)return -1;
    if(a[mid]==key) return mid+1;
    if(a[mid]>key) return recbinsearch(a,key,low,mid-1);
    if(a[mid]<key) return recbinsearch(a,key,mid+1,high);

}

int lsearch(int *a,int n ,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key)
            return i+1;
    }
    return -1;
}