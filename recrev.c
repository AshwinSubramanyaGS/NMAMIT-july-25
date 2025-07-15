//Recursive reverse of a no
#include<stdio.h>

int recrev(int ,int);

int main(){
    int no;
    scanf("%d",&no);
    printf("the reverse of %d is %d",no,recrev(no,0));
    return 0;
}

int recrev(int n,int rev){
    if(n==0) return rev;
    return recrev(n/10,rev*10+n%10);
}