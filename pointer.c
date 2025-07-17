//C Program to Calculate the Sum of the Array Elements using Pointer
#include<stdio.h>
/*
  return type dt*

  ptr ->target address
  *ptr->target value
  &ptr->pointer address
*/
int main(){
    int a[]={1,2,3,4,5},sum=0,*p;
    p=a;
    /* for(int i=0;i<5;i++,p++){
        sum+=*p;
    } */
    /* for(int i=0;i<5;i++){
        sum+=*(p+i);
    } */

    for(int i=0;i<5;i++){
        sum+=p[i];
    }
    printf("The sum of array is %d",sum);
}