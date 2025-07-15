//C Program to Check whether a given Number is Armstrong

#include<stdio.h>

int main(){
    int no=12,temp=0,sum=0;
    for(int i=100;i<1000;i++){
        sum=0;
    temp=i;
    sum=(temp%10)*(temp%10)*(temp%10);
    temp/=10;
    sum+=(temp%10)*(temp%10)*(temp%10);
    temp/=10;   
    sum+=(temp%10)*(temp%10)*(temp%10);

    i==sum ?printf("\n%d ",i):0;
    }
    return 0;
}