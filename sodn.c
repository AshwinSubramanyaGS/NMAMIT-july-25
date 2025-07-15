//C Program to Compute the Sum of Digits in a given Integer
#include<stdio.h>
int main()
{
    int a= 1234, sum=0;
    scanf("%d",&a);
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }
    printf("sum=%d",sum);
}